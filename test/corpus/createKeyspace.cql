================================================================================
CREATE KEYSPACE keyspace WITH REPLICATION = { 'class' : 'SimpleStrategy', 'replication_factor' : 1  };
================================================================================
CREATE KEYSPACE keyspace WITH REPLICATION = { 'class' : 'SimpleStrategy', 'replication_factor' : 1  };
--------------------------------------------------------------------------------
(source_file (create_keyspace (keyspace_name) (replication_list (replication_list_item) (replication_list_item))))

================================================================================
CREATE KEYSPACE keyspace WITH REPLICATION = { 'class' : 'SimpleStrategy', 'replication_factor' : 1  } AND DURABLE_WRITES = false;
================================================================================
CREATE KEYSPACE keyspace WITH REPLICATION = { 'class' : 'SimpleStrategy', 'replication_factor' : 1  } AND DURABLE_WRITES = false;
--------------------------------------------------------------------------------
(source_file (create_keyspace (keyspace_name) (replication_list (replication_list_item) (replication_list_item)) (durable_writes)))