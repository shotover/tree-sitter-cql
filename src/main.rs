use regex::Regex;
use tree_sitter::{
    Language, LogType, Node, Parser, Query, QueryCapture, QueryCursor, QueryMatch, Tree, TreeCursor,
};

 const TEXT: &str = "UPDATE foo SET c = 'yo', v = 123 WHERE z = 1";
//const TEXT: &str = "Drop aggregate if exists foo";
 //const TEXT: &str = "BEGIN LOGGED BATCH USING TIMESTAMP 5 INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5);";
const QUERY: &str = "expression_list/ expression[assignment_map|assignment_list|assignment_set|assignment_tuple] ";

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

pub struct Pattern {
    pub name : Regex,
    pub child : Option<Regex>,
}

impl Pattern {
    pub fn from_str( pattern : &str ) -> Pattern {
        let parts : Vec<&str> = pattern.split("[").collect();
        let namePat = format!("^{}$", parts[0].trim() );
        Pattern {
            name : Regex::new(  namePat.as_str() ).unwrap(),
            child : if parts.len()==2 {
                let name : Vec<&str> = parts[1].split("]").collect();
                let namePat = format!("^{}$", name[0].trim() );
                Some(Regex::new(namePat.as_str()).unwrap())
            } else {
                None
            },
        }
    }
}

fn _search<'tree>(node: Node<'tree>, path: &'static str) -> Box<Vec<Node<'tree>>> {
    let mut nodes = Box::new(vec![node]);
    for segment in path.split('/').map(|tok| tok.trim()) {
        let mut newNodes = Box::new(vec![]);
        let pattern = Pattern::from_str( segment );
        for node in nodes.iter() {
            _find(&mut newNodes, *node, &pattern );
        }
        nodes = newNodes;
    }
    nodes
}

fn _find<'tree>(nodes: &mut Vec<Node<'tree>>, node: Node<'tree>, pattern: &Pattern) {

    let nm = node.kind();
    let id = node.id();
    if pattern.name.is_match(node.kind()) {
        match &pattern.child {
            None => nodes.push(node),
            Some( child ) => if _has( &node, child ) {
                nodes.push(node);
            }
        }
    } else {
        if node.child_count() > 0 {
            for childNo in 0..node.child_count() {
                _find(nodes, node.child(childNo).unwrap(), pattern);
            }
        }
    }
}

fn _has(node : &Node, name : &Regex) -> bool {
    if node.child_count() > 0 {
        for child_no in 0..node.child_count() {
            let child: Node = node.child(child_no).unwrap();
            let k = child.kind();
            let r = name.is_match( k );
            if name.is_match(child.kind()) || _has(&child, name) {
                return true;
            }
        }
    }
    false
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
