================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5);
================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5);
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (begin_batch
      (using_timestamp_spec))
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant))
        (expression
          (constant))))))

================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) IF NOT EXISTS;
================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) IF NOT EXISTS;
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant))
        (expression
          (constant))))))

================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) USING TIMESTAMP 3;
================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) USING TIMESTAMP 3;
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant))
        (expression
          (constant))))
    (using_ttl_timestamp)))

================================================================================
INSERT INTO table (col1, col2) JSON $$ json code $$;
================================================================================
INSERT INTO table (col1, col2) JSON $$ json code $$;
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (constant))))

================================================================================
INSERT INTO table (col1, col2) VALUES ({ 5 : 6 }, 'foo');
================================================================================
INSERT INTO table (col1, col2) VALUES ({ 5 : 6 }, 'foo');
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (assignment_map
            (constant)
            (constant)))
        (expression
          (constant))))))

================================================================================
INSERT INTO table (col1, col2) VALUES ({ 5, 6 }, 'foo');
================================================================================
INSERT INTO table (col1, col2) VALUES ({ 5, 6 }, 'foo');
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (assignment_set
            (constant)
            (constant)))
        (expression
          (constant))))))

================================================================================
INSERT INTO table (col1, col2) VALUES ([ 5, 6 ], 'foo');
================================================================================
INSERT INTO table (col1, col2) VALUES ([ 5, 6 ], 'foo');
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (assignment_list
            (constant)
            (constant)))
        (expression
          (constant))))))

================================================================================
INSERT INTO table (col1, col2) VALUES (( 5, 6 ), 'foo');
================================================================================
INSERT INTO table (col1, col2) VALUES (( 5, 6 ), 'foo');
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (table_name)
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (assignment_tuple
            (expression_list
              (expression
                (constant))
              (expression
                (constant)))))
        (expression
          (constant))))))
