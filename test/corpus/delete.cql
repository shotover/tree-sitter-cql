================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 DELETE column [ 'hello' ] from table WHERE column2 = 'foo' IF EXISTS
================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 DELETE column [ 'hello' ] from table WHERE column2 = 'foo' IF EXISTS
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (begin_batch
      (using_timestamp_spec))
    (delete_column_list
      (delete_column_item))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
BEGIN UNLOGGED BATCH DELETE column [ 6 ] from keyspace.table USING TIMESTAMP 5 WHERE column2='foo' IF column3 = 'stuff'
================================================================================
BEGIN UNLOGGED BATCH DELETE column [ 6 ] from keyspace.table USING TIMESTAMP 5 WHERE column2='foo' IF column3 = 'stuff'
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (begin_batch)
    (delete_column_list
      (delete_column_item))
    (from_spec
      (table_name))
    (using_timestamp_spec)
    (where_spec
      (relation_elements
        (relation_element
          (constant))))
    (if_spec
      (if_condition_list
        (if_condition
          (constant))))))

================================================================================
BEGIN BATCH DELETE column [ 'hello' ] from keyspace.table WHERE column2='foo'
================================================================================
BEGIN BATCH DELETE column [ 'hello' ] from keyspace.table WHERE column2='foo'
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (begin_batch)
    (delete_column_list
      (delete_column_item))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
DELETE from table WHERE column2='foo'
================================================================================
DELETE from table WHERE column2='foo'
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
DELETE column, column3 from keyspace.table WHERE column2='foo'
================================================================================
DELETE column, column3 from keyspace.table WHERE column2='foo'
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (delete_column_list
      (delete_column_item)
      (delete_column_item))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))))

================================================================================
DELETE column, column3 from keyspace.table WHERE column2='foo' IF column4 = 'bar'
================================================================================
DELETE column, column3 from keyspace.table WHERE column2='foo' IF column4 = 'bar'
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (delete_column_list
      (delete_column_item)
      (delete_column_item))
    (from_spec
      (table_name))
    (where_spec
      (relation_elements
        (relation_element
          (constant))))
    (if_spec
      (if_condition_list
        (if_condition
          (constant))))))
