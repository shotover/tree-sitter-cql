================================================================================
CREATE INDEX index_name ON keyspace.table (column);
================================================================================
CREATE INDEX index_name ON keyspace.table (column);
--------------------------------------------------------------------------------

(source_file (create_index (index_name) (table_name) (index_column_spec)))

================================================================================
CREATE INDEX index_name ON table (column);
================================================================================
CREATE INDEX index_name ON table (column);
--------------------------------------------------------------------------------

(source_file (create_index (index_name) (table_name) (index_column_spec)))

================================================================================
CREATE INDEX ON table (column);
================================================================================
CREATE INDEX ON table (column);
--------------------------------------------------------------------------------
(source_file (create_index (table_name) (index_column_spec)))

================================================================================
CREATE INDEX ON table (keys ( key ) );
================================================================================
CREATE INDEX ON table (keys ( key ) );
--------------------------------------------------------------------------------
(source_file (create_index (table_name) (index_column_spec (index_keys_spec))))


================================================================================
CREATE INDEX ON table (entries ( spec ) );
================================================================================
CREATE INDEX ON table (entries ( spec ) );
--------------------------------------------------------------------------------
(source_file (create_index (table_name) (index_column_spec (index_entries_s_spec))))

================================================================================
CREATE INDEX ON table (full ( spec ) );
================================================================================
CREATE INDEX ON table (full ( spec ) );
--------------------------------------------------------------------------------
(source_file (create_index (table_name) (index_column_spec (index_full_spec))))