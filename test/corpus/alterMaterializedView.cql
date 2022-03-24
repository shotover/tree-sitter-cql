================================================================================
ALTER MATERIALIZED VIEW 'keyspace'.mview;
================================================================================
ALTER MATERIALIZED VIEW 'keyspace'.mview;
--------------------------------------------------------------------------------

(source_file
  (alter_materialized_view
    (materialized_view_name)))

================================================================================
ALTER MATERIALIZED VIEW mview;
================================================================================
ALTER MATERIALIZED VIEW mview;
--------------------------------------------------------------------------------

(source_file
  (alter_materialized_view
    (materialized_view_name)))

================================================================================
ALTER MATERIALIZED VIEW keyspace.mview WITH option1 = 'option' AND option2 = 3.5;
================================================================================
ALTER MATERIALIZED VIEW keyspace.mview WITH option1 = 'option' AND option2 = 3.5;
--------------------------------------------------------------------------------

(source_file
  (alter_materialized_view
    (materialized_view_name)
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
