================================================================================
CREATE TABLE IF NOT EXISTS keyspace.table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) );
================================================================================
CREATE TABLE IF NOT EXISTS keyspace.table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) );
--------------------------------------------------------------------------------
(source_file (create_table (column_definition_list (column_definition (data_type (data_type_name))) (column_definition (data_type (data_type_name))) (column_definition (data_type (data_type_name) (data_type_definition (data_type_name (object_name))))) (primary_key_element (primary_key_definition (compound_key (clustering_key_list)))))))

================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH option = 'option' AND option2 = 3.5;
================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH option = 'option' AND option2 = 3.5;
--------------------------------------------------------------------------------
(source_file (create_table (column_definition_list (column_definition (data_type (data_type_name))) (column_definition (data_type (data_type_name))) (column_definition (data_type (data_type_name) (data_type_definition (data_type_name (object_name))))) (primary_key_element (primary_key_definition (compound_key (clustering_key_list))))) (with_element (table_options (table_option_item (table_option_name) (table_option_value)) (table_option_item (table_option_name) (table_option_value))))))

================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table';
================================================================================
CREATE TABLE table (col1 text, col2 int, col3 FROZEN<col4>, PRIMARY KEY (col1, col2) ) WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table';
--------------------------------------------------------------------------------
(source_file (create_table (column_definition_list (column_definition (data_type (data_type_name))) (column_definition (data_type (data_type_name))) (column_definition (data_type (data_type_name) (data_type_definition (data_type_name (object_name))))) (primary_key_element (primary_key_definition (compound_key (clustering_key_list))))) (with_element (table_options (table_option_item (table_option_name) (option_hash (option_hash_item) (option_hash_item))) (table_option_item (table_option_name) (table_option_value))))))
