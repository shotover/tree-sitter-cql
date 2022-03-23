================================================================================
CREATE OR REPLACE AGGREGATE keyspace.aggregate ( UUID ) SFUNC sfunc STYPE TIMESTAMP FINALFUNC finalFunc INITCOND 5;
================================================================================
CREATE OR REPLACE AGGREGATE keyspace.aggregate ( UUID ) SFUNC sfunc STYPE TIMESTAMP FINALFUNC finalFunc INITCOND 5;
--------------------------------------------------------------------------------

(source_file
  (create_aggregate
    (aggregate_name)
    (data_type
      (data_type_name))
    (data_type
      (data_type_name))
    (init_cond_definition
      (constant))))

================================================================================
CREATE AGGREGATE IF NOT EXISTS keyspace.aggregate  ( UUID ) SFUNC sfunc STYPE TIMESTAMP FINALFUNC finalFunc INITCOND 5;
================================================================================
CREATE AGGREGATE IF NOT EXISTS keyspace.aggregate  ( UUID ) SFUNC sfunc STYPE TIMESTAMP FINALFUNC finalFunc INITCOND 5;
--------------------------------------------------------------------------------

(source_file
  (create_aggregate
    (aggregate_name)
    (data_type
      (data_type_name))
    (data_type
      (data_type_name))
    (init_cond_definition
      (constant))))

================================================================================
CREATE AGGREGATE keyspace.aggregate  ( ASCII ) SFUNC sfunc STYPE BIGINT FINALFUNC finalFunc INITCOND ( 5, 'text', 6.3);
================================================================================
CREATE AGGREGATE keyspace.aggregate  ( ASCII ) SFUNC sfunc STYPE BIGINT FINALFUNC finalFunc INITCOND ( 5, 'text', 6.3);
--------------------------------------------------------------------------------

(source_file
  (create_aggregate
    (aggregate_name)
    (data_type
      (data_type_name))
    (data_type
      (data_type_name))
    (init_cond_definition
      (init_cond_list
        (constant)
        (constant)
        (constant)))))

================================================================================
CREATE AGGREGATE keyspace.aggregate  ( ASCII ) SFUNC sfunc STYPE BIGINT FINALFUNC finalFunc INITCOND (( 5, 'text', 6.3),(4,'foo',3.14));
================================================================================
CREATE AGGREGATE keyspace.aggregate  ( ASCII ) SFUNC sfunc STYPE BIGINT FINALFUNC finalFunc INITCOND (( 5, 'text', 6.3),(4,'foo',3.14));
--------------------------------------------------------------------------------

(source_file
  (create_aggregate
    (aggregate_name)
    (data_type
      (data_type_name))
    (data_type
      (data_type_name))
    (init_cond_definition
      (init_cond_nested_list
        (init_cond_list
          (constant)
          (constant)
          (constant))
        (init_cond_list
          (constant)
          (constant)
          (constant))))))

================================================================================
CREATE AGGREGATE keyspace.aggregate  ( ASCII ) SFUNC sfunc STYPE BIGINT FINALFUNC finalFunc INITCOND ( hash_key : (5,7,9));
================================================================================
CREATE AGGREGATE keyspace.aggregate  ( ASCII ) SFUNC sfunc STYPE BIGINT FINALFUNC finalFunc INITCOND ( hash_key : (5,7,9));
--------------------------------------------------------------------------------

(source_file
  (create_aggregate
    (aggregate_name)
    (data_type
      (data_type_name))
    (data_type
      (data_type_name))
    (init_cond_definition
      (init_cond_hash
        (init_cond_hash_item
          (init_cond_definition
            (init_cond_list
              (constant)
              (constant)
              (constant))))))))
