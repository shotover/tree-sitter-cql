================================================================================
CREATE KEYSPACE cycling WITH REPLICATION = { 'class' : 'SimpleStrategy', 'replication_factor' : 1  };
================================================================================
CREATE KEYSPACE cycling
  WITH REPLICATION = { 
   'class' : 'SimpleStrategy', 
   'replication_factor' : 1 
  };
--------------------------------------------------------------------------------

(source_file
  )
