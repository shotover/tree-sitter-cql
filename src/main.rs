use tree_sitter::{
    Language, LogType, Node, Parser, Query, QueryCapture, QueryCursor, QueryMatch, Tree, TreeCursor,
};

const TEXT: &str = "DELETE column, column3 from keyspace.table WHERE column2='foo';";
const QUERY: &str = "delete_column_list / column";

fn log(_x: LogType, message: &str) {
    println!("{}", message);
}

fn main() {
    let language = tree_sitter_cql::language();
    let mut parser = Parser::new();
    if parser.set_language(language).is_err() {
        panic!("language version mismatch");
    }
    //parser.set_logger( Some( Box::new( log)) );
    let source_code = TEXT.as_bytes();
    let tree = parser.parse(source_code, None).unwrap();
    println!("{}", tree.root_node().to_sexp());

    _walk(&"".to_string(), &tree.root_node());

    //_map( tree.root_node() );

    assert!(!tree.root_node().has_error());

    let result = _search(tree.root_node(), QUERY);
    println!("=== QUERY RESULTS ===");
    for n in result.iter() {
        _print_node("found: ", &n);
    }

    /*println!( "Executing query {}", &QUERY );
    let query = match Query::new( language, &QUERY ) {
        Ok(t) => {
            println!( "Query: {:?}", t );
            t
        },
        Err(e) => {
            println!( "Error: {:?}", e );
            panic!( "query parse failed");
        },
    };
    let mut query_cursor = QueryCursor::new();
    for m  in query_cursor.matches( &query ,tree.root_node(),source_code ) {
        println!("  pattern: {}", m.pattern_index);
        println!( " {:?}", m);
        for capture in m.captures {
            let start = capture.node.start_position();
            let end = capture.node.end_position();
            let capture_name = &query.capture_names()[capture.index as usize];
            if end.row == start.row {
                println!(
                    "    capture: {} - {}, start: {}, end: {}, text: `{}`",
                    capture.index,
                    capture_name,
                    start,
                    end,
                    capture.node.utf8_text(&source_code).unwrap_or("")
                );
            } else {
                println!(
                    "    capture: {}, start: {}, end: {}",
                    capture_name, start, end,
                );
            }
        }
    }
     */
}

fn _map<'tree>(node: Node<'tree>) {
    print!("{} ({})-> ", node.kind(), node.id());
    if node.child_count() > 0 {
        for child_no in 0..node.child_count() {
            print!("{}, ", node.child(child_no).unwrap().id());
        }
    }
    println!();

    if node.child(0).is_some() {
        _map(node.child(0).unwrap());
    }

    if node.next_sibling().is_some() {
        _map(node.next_sibling().unwrap());
    }
}

fn _search<'tree>(node: Node<'tree>, path: &'static str) -> Box<Vec<Node<'tree>>> {
    let mut nodes = Box::new(vec![node]);
    for segment in path.split('/').map(|tok| tok.trim()) {
        let mut newNodes = Box::new(vec![]);
        for node in nodes.iter() {
            _find(&mut newNodes, *node, segment);
        }
        nodes = newNodes;
    }
    nodes
}

fn _find<'tree>(nodes: &mut Vec<Node<'tree>>, node: Node<'tree>, name: &str) {
    let nm = node.kind();
    let id = node.id();
    if node.kind().eq(name) {
        nodes.push(node);
    } else {
        if node.child_count() > 0 {
            for childNo in 0..node.child_count() {
                _find(nodes, node.child(childNo).unwrap(), name);
            }
        }
    }
}

fn _walk(prefix: &str, node: &Node) {
    let mut new_prefix = "  ".to_string();
    new_prefix += prefix;
    _print_node(prefix, node);
    if node.child_count() > 0 {
        for child_no in 0..node.child_count() {
            _walk(&new_prefix, &node.child(child_no).unwrap());
        }
    }
}

fn _print_node(prefix: &str, node: &Node) {
    println!("{}===== Node {:?} ====", prefix, node);
    println!(
        "{}  id: {:?}  named: {:?}  kind id: {:?}  kind: {:?}",
        prefix,
        node.id(),
        node.is_named(),
        node.kind_id(),
        node.kind()
    );
    println!(
        "{} err: {:?} {:?} {}",
        prefix,
        node.is_error(),
        node.has_error(),
        node.to_sexp()
    );
    println!("{}  utf8 {:?}", prefix, node.utf8_text(TEXT.as_bytes()));
    println!("{}=========", prefix)
}
