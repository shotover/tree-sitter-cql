================================================================================
CREATE TRIGGER trigger_name USING 'trigger_class';
================================================================================
CREATE TRIGGER trigger_name USING 'trigger_class';
--------------------------------------------------------------------------------

(source_file
    (create_trigger
    (trigger_name)
    (trigger_class)))

================================================================================
CREATE TRIGGER if not exists trigger_name USING 'trigger_class';
================================================================================
CREATE TRIGGER if not exists trigger_name USING 'trigger_class';
--------------------------------------------------------------------------------

(source_file
    (create_trigger
        (trigger_name)
        (trigger_class)))

================================================================================
CREATE TRIGGER if not exists keyspace.trigger_name USING 'trigger_class';
================================================================================
CREATE TRIGGER if not exists keyspace.trigger_name USING 'trigger_class';
--------------------------------------------------------------------------------

(source_file
    (create_trigger
    (trigger_name)
    (trigger_class)))
