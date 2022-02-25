================================================================================
CREATE TABLE cycling.race_winners (race_name text, race_position int, cyclist_name FROZEN<fullname>,PRIMARY KEY (race_name, race_position));
================================================================================
CREATE TABLE cycling.race_winners (
   race_name text, 
   race_position int, 
   cyclist_name FROZEN<fullname>, 
   PRIMARY KEY (race_name, race_position));
--------------------------------------------------------------------------------

(source_file
  (create_table
    (keyspace)
    (table)
    (column_definition_list
      (column_definition
        (column)
        (data_type
          (data_type_name)))
      (column_definition
        (column)
        (data_type
          (data_type_name)))
      (column_definition
        (column)
        (data_type
          (data_type_name)
          (data_type_definition
            (data_type_name))))
      (column_definition
        (column)
        (data_type
          (data_type_name))))
    (ERROR
      (UNEXPECTED 'a')
      (column))))
