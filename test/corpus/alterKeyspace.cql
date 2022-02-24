================================================================================
Alter Keyspace test
================================================================================
ALTER KEYSPACE cycling
WITH REPLICATION = { 
  'class' : 'NetworkTopologyStrategy',
  'datacenter1' : 3 } 
 AND DURABLE_WRITES = false ;
--------------------------------------------------------------------------------
(source_file
    (alter_keyspace
    (keyspace
    (object_name))
    (replication_list
    (replication_list_item
    (string_literal)
    (string_literal))
    (replication_list_item
    (string_literal)
    (decimal_literal)))
    (durable_writes
    (boolean_literal))))
