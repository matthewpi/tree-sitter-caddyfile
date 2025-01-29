import XCTest
import SwiftTreeSitter
import TreeSitterCaddyfile

final class TreeSitterCaddyfileTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_caddyfile())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Caddyfile grammar")
    }
}
