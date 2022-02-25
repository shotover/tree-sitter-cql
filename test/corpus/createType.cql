================================================================================
CREATE TYPE cycling.basic_info (birthday timestamp, nationality text,  weight text,  height text);
================================================================================
CREATE TYPE cycling.basic_info (
  birthday timestamp,
  nationality text,
  weight text,
  height text
);
--------------------------------------------------------------------------------

(source_file
  (create_type
    (keyspace)
    (type)
    (type_member_column_list
      (column)
      (data_type
        (data_type_name))
      (column)
      (data_type
        (data_type_name))
      (column)
      (data_type
        (data_type_name))
      (column)
      (data_type
        (data_type_name)))))
