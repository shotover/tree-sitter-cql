================================================================================
DROP AGGREGATE IF EXISTS cycling.avgState;
================================================================================
DROP AGGREGATE IF EXISTS cycling.avgState;
--------------------------------------------------------------------------------

(source_file
  (drop_aggregate
    (keyspace)
    (ERROR
      (UNEXPECTED 'y')
      (UNEXPECTED '.'))
    (aggregate)))

================================================================================
DROP AGGREGATE cycling.avgState;
================================================================================
DROP AGGREGATE cycling.avgState;
--------------------------------------------------------------------------------

(source_file
  (drop_aggregate
    (keyspace)
    (aggregate)))
