================================================================================
CREATE MATERIALIZED VIEW cycling.cyclist_by_age AS SELECT age, name, country  FROM cycling.cyclist_mv  WHERE age IS NOT NULL AND cid IS NOT NULL PRIMARY KEY (age, cid)
   WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' } AND comment = 'Based on table cyclist' ;
================================================================================
CREATE MATERIALIZED VIEW cycling.cyclist_by_age
AS SELECT age, name, country
FROM cycling.cyclist_mv
WHERE age IS NOT NULL AND cid IS NOT NULL
PRIMARY KEY (age, cid)
WITH caching = { 'keys' : 'ALL', 'rows_per_partition' : '100' }
   AND comment = 'Based on table cyclist' ;
--------------------------------------------------------------------------------

(source_file
  (create_materialized_view
    (column_list)
    (materialized_view_where
      (column_not_null_list
        (column_not_null)))
    (column_list)
    (materialized_view_options
      (table_options
        (table_option_item
          (table_option_name)
          (table_option_value
            (string_literal))))))
