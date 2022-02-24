use tree_sitter::{Node, Parser, TreeCursor};

const TEXT : &str = "SELECT * FROM cycling.calendar WHERE race_id IN (100, 101, 102) AND (race_start_date, race_end_date) IN (('2015-01-01','2015-02-02'), ('2016-01-01','2016-02-02'));";
fn main() {
    let language = tree_sitter_cql::language();
    let mut parser = Parser::new();
    if parser.set_language(language).is_err() {
        panic!("language version mismatch");
    }
    let source_code = TEXT.as_bytes();
    let tree = parser.parse(source_code, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
    /*
    walk( &"".to_string(),&mut tree.walk() );
    let query = match Query::new( language, "(where_spec)") {
        Ok(t) => {
            println!( "Query: {:?}", t );
            t
        },
        Err(e) => {
            println!( "Error: {:?}", e );
            panic!( "parse failed");
        },
    };
    let mut query_cursor = QueryCursor::new();
    for m  in query_cursor.matches( &query ,tree.root_node(),source_code ) {
        println!("  pattern: {}", m.pattern_index);
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

fn _walk(prefix: &str, cursor: &mut TreeCursor) {
    let mut new_prefix = "  ".to_string();
    new_prefix += prefix;
    _print_node(prefix, &cursor.node());
    if cursor.goto_first_child() {
        _walk(&new_prefix, cursor);
    }
    if cursor.goto_next_sibling() {
        _walk(prefix, cursor);
    }
    cursor.goto_parent();
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
