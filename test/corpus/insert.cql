================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5);
================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5);
--------------------------------------------------------------------------------
(source_file (insert_statement (begin_batch (using_timestamp_spec (timestamp))) (insert_column_spec (column_list)) (insert_values_spec (expression_list (expression (constant)) (expression (constant))))))

================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) IF NOT EXISTS;
================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) IF NOT EXISTS;
--------------------------------------------------------------------------------
(source_file (insert_statement (insert_column_spec (column_list)) (insert_values_spec (expression_list (expression (constant)) (expression (constant))))))

================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) USING TIMESTAMP 3;
================================================================================
INSERT INTO keyspace.table (col1, col2) VALUES ('hello', 5) USING TIMESTAMP 3;
--------------------------------------------------------------------------------
(source_file (insert_statement (insert_column_spec (column_list)) (insert_values_spec (expression_list (expression (constant)) (expression (constant)))) (using_ttl_timestamp (timestamp))))

================================================================================
INSERT INTO table  VALUES ('hello', 5);
================================================================================
INSERT INTO table  VALUES ('hello', 5);
--------------------------------------------------------------------------------
(source_file (insert_statement (insert_values_spec (expression_list (expression (constant)) (expression (constant))))))
