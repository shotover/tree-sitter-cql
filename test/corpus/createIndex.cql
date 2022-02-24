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
    (keyspace
    (object_name))
    (table
    (object_name))
    (index_column_spec
    (column
    (object_name)))))

================================================================================
CREATE INDEX ON myschema.users (zip);
================================================================================
CREATE INDEX ON myschema.users (zip);
--------------------------------------------------------------------------------
