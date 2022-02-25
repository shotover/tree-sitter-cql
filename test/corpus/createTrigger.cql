================================================================================
CREATE TRIGGER trigger_name USING 'trigger_class';
================================================================================
CREATE TRIGGER trigger_name USING 'trigger_class';
--------------------------------------------------------------------------------

(source_file
  (create_trigger
    (trigger)
    (trigger_class
      (string_literal))))

================================================================================
CREATE TRIGGER if not exist trigger_name USING 'trigger_class';
================================================================================
CREATE TRIGGER if not exist trigger_name USING 'trigger_class';
--------------------------------------------------------------------------------

(source_file
  (create_trigger
    (trigger)
    (ERROR
      (UNEXPECTED ')
      (UNEXPECTED '_'))
    (trigger_class
      (string_literal))))

================================================================================
CREATE TRIGGER if not exist keyspace.trigger_name USING 'trigger_class';
================================================================================
CREATE TRIGGER if not exist keyspace.trigger_name USING 'trigger_class';
--------------------------------------------------------------------------------

(source_file
  (create_trigger
    (trigger)
    (ERROR
      (UNEXPECTED ')
      (UNEXPECTED '_'))
    (trigger_class
      (string_literal))))
