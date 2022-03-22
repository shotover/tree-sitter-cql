================================================================================
CREATE TABLE IF NOT EXISTS keyspace.table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) );
================================================================================
CREATE TABLE IF NOT EXISTS keyspace.table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) );
--------------------------------------------------------------------------------

(source_file
  (create_table
    (table_name)
    (column_definition_list
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)
          (data_type_definition
            (data_type_name
              (object_name)))))
      (primary_key_element
        (primary_key_definition
          (compound_key
            (clustering_key_list
              (object_name))))))))

================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH option = 'option' AND option2 = 3.5;
================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH option = 'option' AND option2 = 3.5;
--------------------------------------------------------------------------------

(source_file
  (create_table
    (table_name)
    (column_definition_list
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)
          (data_type_definition
            (data_type_name
              (object_name)))))
      (primary_key_element
        (primary_key_definition
          (compound_key
            (clustering_key_list
              (object_name))))))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))))))

================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table';
================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table';
--------------------------------------------------------------------------------

(source_file
  (create_table
    (table_name)
    (column_definition_list
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)
          (data_type_definition
            (data_type_name
              (object_name)))))
      (primary_key_element
        (primary_key_definition
          (compound_key
            (clustering_key_list
              (object_name))))))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (option_hash
            (option_hash_item)
            (option_hash_item)))
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))))))

================================================================================
CREATE TABLE keyspace.table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH CLUSTERING ORDER BY ( col2 )
================================================================================
CREATE TABLE keyspace.table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH CLUSTERING ORDER BY ( col2 )
--------------------------------------------------------------------------------

(source_file
  (create_table
    (table_name)
    (column_definition_list
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)
          (data_type_definition
            (data_type_name
              (object_name)))))
      (primary_key_element
        (primary_key_definition
          (compound_key
            (clustering_key_list
              (object_name))))))
    (with_element
      (table_options
        (clustering_order)))))

================================================================================
CREATE TABLE keyspace.table (col1 text, col2 int, PRIMARY KEY (col1) ) WITH option1='value' AND CLUSTERING ORDER BY ( col2 ) AND ID='someId' AND COMPACT STORAGE
================================================================================
CREATE TABLE keyspace.table (col1 text, col2 int, PRIMARY KEY (col1) ) WITH option1='value' AND CLUSTERING ORDER BY ( col2 ) AND ID='someId' AND COMPACT STORAGE
--------------------------------------------------------------------------------

(source_file
  (create_table
    (table_name)
    (column_definition_list
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (primary_key_element
        (primary_key_definition)))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (clustering_order)
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (compact_storage)))))

================================================================================
CREATE TABLE keyspace.table (col1 text, col2 int, col3 int,  PRIMARY KEY ((col1,col2),col3) ) WITH option1='value' AND CLUSTERING ORDER BY ( col2 ) AND ID='someId' AND COMPACT STORAGE
================================================================================
CREATE TABLE keyspace.table (col1 text, col2 int, col3 int, PRIMARY KEY ((col1,col2),col3) ) WITH option1='value' AND CLUSTERING ORDER BY ( col2 ) AND ID='someId' AND COMPACT STORAGE
--------------------------------------------------------------------------------

(source_file
  (create_table
    (table_name)
    (column_definition_list
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (column_definition
        (data_type
          (data_type_name)))
      (primary_key_element
        (primary_key_definition
          (composite_key
            (partition_key_list
              (object_name)
              (object_name))
            (clustering_key_list
              (object_name))))))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (clustering_order)
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (compact_storage)))))
