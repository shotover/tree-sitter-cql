================================================================================
CREATE MATERIALIZED VIEW view AS SELECT col1, col2 FROM tbl WHERE col3 IS NOT NULL PRIMARY KEY (col1);
================================================================================
CREATE MATERIALIZED VIEW view AS SELECT col1, col2 FROM tbl WHERE col3 IS NOT NULL PRIMARY KEY (col1);
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name)))
    (primary_key_element
      (primary_key_definition))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col3 IS NOT NULL PRIMARY KEY (col1)
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col3 IS NOT NULL PRIMARY KEY (col1)
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name)))
    (primary_key_element
      (primary_key_definition))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col3 IS NOT NULL PRIMARY KEY (col1) WITH option1 = 'option';
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col3 IS NOT NULL PRIMARY KEY (col1) WITH option1 = 'option';
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name)))
    (primary_key_element
      (primary_key_definition))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col3 IS NOT NULL PRIMARY KEY (col1) WITH option1 = 'option' AND CLUSTERING ORDER BY (col2 DESC);
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col3 IS NOT NULL PRIMARY KEY (col1) WITH option1 = 'option' AND CLUSTERING ORDER BY (col2 DESC);
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name)))
    (primary_key_element
      (primary_key_definition))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (clustering_order)))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1) WITH option1 = 'option' AND option2 = 3.5 AND CLUSTERING ORDER BY (col2 DESC);
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1) WITH option1 = 'option' AND option2 = 3.5 AND CLUSTERING ORDER BY (col2 DESC);
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name))
      (relation_element
        (constant)))
    (primary_key_element
      (primary_key_definition))
    (with_element
      (table_options
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (table_option_item
          (table_option_name
            (object_name))
          (table_option_value))
        (clustering_order)))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1) WITH CLUSTERING ORDER BY (col2 DESC);
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1) WITH CLUSTERING ORDER BY (col2 DESC);
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name))
      (relation_element
        (constant)))
    (primary_key_element
      (primary_key_definition))
    (with_element
      (table_options
        (clustering_order)))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1) WITH option1 = 'option' AND option2 = 3.5;
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1) WITH option1 = 'option' AND option2 = 3.5;
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name))
      (relation_element
        (constant)))
    (primary_key_element
      (primary_key_definition))
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
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1);
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL AND col4 IS NOT NULL AND col5 <> 'foo' PRIMARY KEY (col1);
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name))
      (relation_element
        (constant)))
    (primary_key_element
      (primary_key_definition))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL PRIMARY KEY (col1,col2)
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2 FROM ks_target.tbl_target WHERE col3 IS NOT NULL PRIMARY KEY (col1,col2)
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name)))
    (primary_key_element
      (primary_key_definition
        (compound_key
          (clustering_key_list
            (object_name)))))))

================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2, col3  FROM keyspace.table  WHERE col1 IS NOT NULL AND col4 IS NOT NULL PRIMARY KEY (col1, col4)
   WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table' ;
================================================================================
CREATE MATERIALIZED VIEW keyspace.view AS SELECT col1, col2, col3  FROM keyspace.table  WHERE col1 IS NOT NULL AND col4 IS NOT NULL PRIMARY KEY (col1, col4)
                                          WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table' ;
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (materialized_view_name)
    (materialized_view_columns
      (column_list))
    (table_name)
    (materialized_view_where
      (column_not_null
        (object_name))
      (column_not_null
        (object_name)))
    (primary_key_element
      (primary_key_definition
        (compound_key
          (clustering_key_list
            (object_name)))))
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
