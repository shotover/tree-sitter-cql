================================================================================
ALTER KEYSPACE keyspace WITH REPLICATION = { 'foo' : 'bar', 'baz' : 5};
================================================================================
ALTER KEYSPACE keyspace WITH REPLICATION = { 'foo' : 'bar', 'baz' : 5};
--------------------------------------------------------------------------------
(source_file (alter_keyspace (replication_list (replication_list_item) (replication_list_item))))

================================================================================
ALTER KEYSPACE keyspace WITH REPLICATION = { 'foo' : 5 } AND DURABLE_WRITES = true;
================================================================================
ALTER KEYSPACE keyspace WITH REPLICATION = { 'foo' : 5 } AND DURABLE_WRITES = true;
--------------------------------------------------------------------------------
(source_file (alter_keyspace (replication_list (replication_list_item)) (durable_writes)))
