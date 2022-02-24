================================================================================
ALTER MATERIALIZED VIEW cycling.cyclist_by_age WITH comment = 'A most excellent and useful view' AND bloom_filter_fp_chance = 0.02;
================================================================================
ALTER MATERIALIZED VIEW cycling.cyclist_by_age
WITH comment = 'A most excellent and useful view'
AND bloom_filter_fp_chance = 0.02;
--------------------------------------------------------------------------------
(source_file
    (alter_materialized_view
    (keyspace
    (object_name))
    (materialized_view
    (object_name))
    (table_options
    (table_option_item
    (table_option_name
    (object_name))
    (table_option_value
    (string_literal)))
    (table_option_item
    (table_option_name
    (object_name))
    (table_option_value
    (float_literal
    (decimal_literal)))))))