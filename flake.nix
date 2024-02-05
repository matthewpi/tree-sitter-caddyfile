{
  description = "Tree Sitter Grammar for Caddyfiles";

  inputs = {
    flake-parts.url = "github:hercules-ci/flake-parts";
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

    treefmt-nix = {
      url = "github:numtide/treefmt-nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };

  outputs = {...} @ inputs:
    inputs.flake-parts.lib.mkFlake {inherit inputs;} {
      systems = ["aarch64-darwin" "aarch64-linux" "x86_64-darwin" "x86_64-linux"];

      imports = [
        inputs.treefmt-nix.flakeModule
      ];

      perSystem = {system, ...}: let
        pkgs = import inputs.nixpkgs {inherit system;};
      in {
        devShells.ci = pkgs.mkShellNoCC {buildInputs = [pkgs.gitsign];};

        devShells.default = pkgs.mkShell {
          buildInputs = with pkgs; [
            gcc
            nodejs
            nodePackages.node-gyp
            python3
            tree-sitter
          ];
        };

        treefmt = {
          projectRootFile = "flake.nix";

          programs = {
            alejandra.enable = true;
            deadnix.enable = true;
            prettier = {
              enable = true;
              includes = [
                "grammar.js"
                "package.json"
                "*.md"
              ];
            };
            shellcheck.enable = true;
            shfmt = {
              enable = true;
              indent_size = 0; # 0 causes shfmt to use tabs
            };
            yamlfmt.enable = true;
          };

          settings.global.excludes = [
            "**/node_modules"
            "**/package-lock.json"
            "src/**"
          ];
        };
      };
    };
}
