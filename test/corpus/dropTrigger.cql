================================================================================
DROP TRIGGER trigger_name ON table_name;
================================================================================
DROP TRIGGER trigger_name ON table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (trigger
    (object_name))
    (table
    (object_name))))

================================================================================
DROP TRIGGER trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER trigger_name ON ks.table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (trigger
    (object_name))
    (keyspace
    (object_name))
    (table
    (object_name))))

================================================================================
DROP TRIGGER keyspace.trigger_name ON table_name;
================================================================================
DROP TRIGGER keyspace.trigger_name ON table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (keyspace
    (object_name))
    (trigger
    (object_name))
    (table
    (object_name))))

================================================================================
DROP TRIGGER keyspace.trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER keyspace.trigger_name ON ks.table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (keyspace
    (object_name))
    (trigger
    (object_name))
    (keyspace
    (object_name))
    (table
    (object_name))))



================================================================================
DROP TRIGGER if exists trigger_name ON table_name;
================================================================================
DROP TRIGGER if exists trigger_name ON table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (trigger
    (object_name))
    (table
    (object_name))))

================================================================================
DROP TRIGGER if exists trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER if exists trigger_name ON ks.table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (trigger
    (object_name))
    (keyspace
    (object_name))
    (table
    (object_name))))

================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON table_name;
================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (keyspace
    (object_name))
    (trigger
    (object_name))
    (table
    (object_name))))

================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON ks.table_name;
================================================================================
DROP TRIGGER if exists keyspace.trigger_name ON ks.table_name;
--------------------------------------------------------------------------------
(source_file
    (drop_trigger
    (keyspace
    (object_name))
    (trigger
    (object_name))
    (keyspace
    (object_name))
    (table
    (object_name))))
