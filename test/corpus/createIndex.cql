================================================================================
CREATE INDEX user_state ON myschema.users (state);
================================================================================
CREATE INDEX user_state
   ON myschema.users (state);
--------------------------------------------------------------------------------

(source_file
  (create_index
    (index_name
      (object_name))
    (keyspace)
    (table)
    (index_column_spec
      (column))))

================================================================================
CREATE INDEX ON myschema.users (zip);
================================================================================
CREATE INDEX ON myschema.users (zip);
--------------------------------------------------------------------------------

(source_file
  (ERROR
    (index_name
      (object_name))
    (UNEXPECTED 'y')
    (UNEXPECTED 's')
    (UNEXPECTED 'z')))
