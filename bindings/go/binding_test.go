package tree_sitter_caddyfile_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_caddyfile "github.com/matthewpi/tree-sitter-caddyfile/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_caddyfile.Language())
	if language == nil {
		t.Errorf("Error loading Caddyfile grammar")
	}
}
