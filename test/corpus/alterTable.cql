================================================================================
ALTER TABLE keyspace.table ADD column1 UUID, column2 BIGINT;
================================================================================
ALTER TABLE keyspace.table ADD column1 UUID, column2 BIGINT;
--------------------------------------------------------------------------------

(source_file
  (alter_table
    (table_name)
    (alter_table_operation
      (alter_table_add
        (alter_table_column_definition
          (data_type
            (data_type_name)))
        (alter_table_column_definition
          (data_type
            (data_type_name)))))))

================================================================================
ALTER TABLE keyspace.table DROP column1, column2;
================================================================================
ALTER TABLE keyspace.table DROP column1, column2;
--------------------------------------------------------------------------------

(source_file
  (alter_table
    (table_name)
    (alter_table_operation
      (alter_table_drop_columns
        (alter_table_drop_column_list)))))

================================================================================
ALTER TABLE keyspace.table DROP COMPACT STORAGE;
================================================================================
ALTER TABLE keyspace.table DROP COMPACT STORAGE;
--------------------------------------------------------------------------------

(source_file
  (alter_table
    (table_name)
    (alter_table_operation
      (alter_table_drop_compact_storage))))

================================================================================
ALTER TABLE keyspace.table RENAME column1 TO column2;
================================================================================
ALTER TABLE keyspace.table RENAME column1 TO column2;
--------------------------------------------------------------------------------

(source_file
  (alter_table
    (table_name)
    (alter_table_operation
      (alter_table_rename))))

================================================================================
ALTER TABLE keyspace.table WITH option1 = 'option' AND option2 = 3.5;
================================================================================
ALTER TABLE keyspace.table WITH option1 = 'option' AND option2 = 3.5;
--------------------------------------------------------------------------------

(source_file
  (alter_table
    (table_name)
    (alter_table_operation
      (alter_table_with
        (table_options
          (table_option_item
            (table_option_name
              (object_name))
            (table_option_value))
          (table_option_item
            (table_option_name
              (object_name))
            (table_option_value)))))))
