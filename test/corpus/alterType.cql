================================================================================
ALTER TYPE keyspace.type ALTER column TYPE UUID;
================================================================================
ALTER TYPE keyspace.type ALTER column TYPE UUID;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_alter_type (data_type (data_type_name))))))

================================================================================
ALTER TYPE keyspace.type ADD column2 UUID, column3 TIMESTAMP;
================================================================================
ALTER TYPE keyspace.type ADD column2 UUID, column3 TIMESTAMP;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_add (data_type (data_type_name)) (data_type (data_type_name))))))

================================================================================
ALTER TYPE keyspace.type RENAME column1 TO column2;
================================================================================
ALTER TYPE keyspace.type RENAME column1 TO column2;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_rename (alter_type_rename_list (alter_type_rename_item))))))

================================================================================
ALTER TYPE type ALTER column TYPE UUID;
================================================================================
ALTER TYPE type ALTER column TYPE UUID;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_alter_type (data_type (data_type_name))))))

================================================================================
ALTER TYPE type ADD column2 UUID, column3 TIMESTAMP;
================================================================================
ALTER TYPE type ADD column2 UUID, column3 TIMESTAMP;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_add (data_type (data_type_name)) (data_type (data_type_name))))))

================================================================================
ALTER TYPE type RENAME column1 TO column2;
================================================================================
ALTER TYPE type RENAME column1 TO column2;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_rename (alter_type_rename_list (alter_type_rename_item))))))

================================================================================
ALTER TYPE type RENAME column1 TO column2 AND col3 TO col4;
================================================================================
ALTER TYPE type RENAME column1 TO column2 AND col3 TO col4;
--------------------------------------------------------------------------------
(source_file (alter_type (alter_type_operation (alter_type_rename (alter_type_rename_list (alter_type_rename_item))))))
