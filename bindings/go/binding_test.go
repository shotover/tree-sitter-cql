package tree_sitter_cql_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-cql"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cql.Language())
	if language == nil {
		t.Errorf("Error loading Cql grammar")
	}
}
