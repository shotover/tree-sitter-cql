================================================================================
DROP TRIGGER trigger_name ON table_name;
================================================================================
DROP TRIGGER trigger_name ON table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (trigger)
    (table)))

================================================================================
DROP TRIGGER trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER trigger_name ON ks.table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (trigger)
    (keyspace)
    (table)))

================================================================================
DROP TRIGGER keyspace.trigger_name ON table_name;
================================================================================
DROP TRIGGER keyspace.trigger_name ON table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (keyspace)
    (trigger)
    (table)))

================================================================================
DROP TRIGGER keyspace.trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER keyspace.trigger_name ON ks.table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (keyspace)
    (trigger)
    (keyspace)
    (table)))

================================================================================
DROP TRIGGER if exists trigger_name ON table_name;
================================================================================
DROP TRIGGER if exists trigger_name ON table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (trigger)
    (ERROR
      (UNEXPECTED '_'))
    (table)))

================================================================================
DROP TRIGGER if exists trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER if exists trigger_name ON ks.table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (trigger)
    (ERROR
      (UNEXPECTED '_'))
    (keyspace)
    (table)))

================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON table_name;
================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (keyspace)
    (ERROR)
    (trigger)
    (table)))

================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON ks.table_name;
--------------------------------------------------------------------------------

(source_file
  (drop_trigger
    (keyspace)
    (ERROR)
    (trigger)
    (keyspace)
    (table)))
