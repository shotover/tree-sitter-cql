================================================================================
SELECT DISTINCT JSON * FROM table;
================================================================================
SELECT DISTINCT JSON * FROM table;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements)
    (from_spec
      (table_name))))

================================================================================
SELECT column FROM table;
================================================================================
SELECT column FROM table;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))))

================================================================================
SELECT column AS column2 FROM table;
================================================================================
SELECT column AS column2 FROM table;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))))

================================================================================
SELECT func(*) FROM table;
================================================================================
SELECT func(*)  FROM table;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element
        (function_call)))
    (from_spec
      (table_name))))

================================================================================
SELECT column AS column2, func(*) AS func2 FROM table;
================================================================================
SELECT column AS column2, func(*) AS func2 FROM table;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element)
      (select_element
        (function_call)))
    (from_spec
      (table_name))))

================================================================================
SELECT column FROM table WHERE col < 5;
================================================================================
SELECT column FROM table WHERE col < 5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col <= 'hello';
================================================================================
SELECT column FROM table WHERE col <= 'hello';
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col = 5b6962dd-3f90-4c93-8f61-eabfa4a803e2;
================================================================================
SELECT column FROM table WHERE col = 5b6962dd-3f90-4c93-8f61-eabfa4a803e2;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col <> -5;
================================================================================
SELECT column FROM table WHERE col <> -5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col >= 3.5;
================================================================================
SELECT column FROM table WHERE col >= 3.5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col = 0XFF;
================================================================================
SELECT column FROM table WHERE col = 0XFF;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col = true;
================================================================================
SELECT column FROM table WHERE col = true;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col = false;
================================================================================
SELECT column FROM table WHERE col = false;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col = null;
================================================================================
SELECT column FROM table WHERE col = null;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE col = $$ a code's block $$;
================================================================================
SELECT column FROM table WHERE col = $$ a code's block $$;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) < 5;
================================================================================
SELECT column FROM table WHERE func(*) < 5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) <= 'hello';
================================================================================
SELECT column FROM table WHERE func(*) <= 'hello';
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) = 5b6962dd-3f90-4c93-8f61-eabfa4a803e2;
================================================================================
SELECT column FROM table WHERE func(*) = 5b6962dd-3f90-4c93-8f61-eabfa4a803e2;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) <> -5;
================================================================================
SELECT column FROM table WHERE func(*) <> -5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) >= 3.5;
================================================================================
SELECT column FROM table WHERE func(*) >= 3.5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) = 0XFF;
================================================================================
SELECT column FROM table WHERE func(*) = 0XFF;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) = true;
================================================================================
SELECT column FROM table WHERE func(*) = true;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) = false;
================================================================================
SELECT column FROM table WHERE func(*) = false;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (constant))))))

================================================================================
SELECT column FROM table WHERE func(*) = func2(*);
================================================================================
SELECT column FROM table WHERE func(*) <> func2(*);
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_call)
          (function_call))))))

================================================================================
SELECT column FROM table WHERE col IN ( 'literal', 5, func(*), true );
================================================================================
SELECT column FROM table WHERE col IN ( 'literal', 5, func(*), true );
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (function_args
            (constant)
            (constant)
            (function_call)
            (constant)))))))

================================================================================
SELECT column FROM table WHERE (col1, col2) IN (( 5, 'stuff'), (6, 'other'));
================================================================================
SELECT column FROM table WHERE (col1, col2) IN (( 5, 'stuff'), (6, 'other'));
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (assignment_tuple
            (expression_list
              (expression
                (constant))
              (expression
                (constant))))
          (assignment_tuple
            (expression_list
              (expression
                (constant))
              (expression
                (constant)))))))))

================================================================================
SELECT column FROM table WHERE (col1, col2) >= ( 5, 'stuff'), (6, 'other');
================================================================================
SELECT column FROM table WHERE (col1, col2) >= ( 5, 'stuff'), (6, 'other');
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (assignment_tuple
            (expression_list
              (expression
                (constant))
              (expression
                (constant))))
          (assignment_tuple
            (expression_list
              (expression
                (constant))
              (expression
                (constant)))))))))

================================================================================
SELECT column FROM table WHERE col1 CONTAINS 'foo';
================================================================================
SELECT column FROM table WHERE col1 CONTAINS 'foo';
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (relation_contains
            (constant)))))))

================================================================================
SELECT column FROM table WHERE col1 CONTAINS KEY 'foo';
================================================================================
SELECT column FROM table WHERE col1 CONTAINS KEY 'foo';
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (relation_contains_key
            (constant)))))))

================================================================================
SELECT column FROM table ORDER BY col1;
================================================================================
SELECT column FROM table ORDER BY col1;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (order_spec
      (object_name))))

================================================================================
SELECT column FROM table ORDER BY col1 ASC;
================================================================================
SELECT column FROM table ORDER BY col1 ASC;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (order_spec
      (object_name))))

================================================================================
SELECT column FROM table ORDER BY col1 DESC;
================================================================================
SELECT column FROM table ORDER BY col1 DESC;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (order_spec
      (object_name))))

================================================================================
SELECT column FROM table LIMIT 5;
================================================================================
SELECT column FROM table LIMIT 5;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))
    (limit_spec)))

================================================================================
SELECT column FROM table ALLOW FILTERING;
================================================================================
SELECT column FROM table ALLOW FILTERING;
--------------------------------------------------------------------------------

(source_file
  (select_statement
    (select_elements
      (select_element))
    (from_spec
      (table_name))))

================================================================================
SELECT column FROM table WHERE col = ?;
================================================================================
SELECT column FROM table WHERE col = ?;
--------------------------------------------------------------------------------