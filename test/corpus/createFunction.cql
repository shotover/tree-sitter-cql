================================================================================
CREATE OR REPLACE FUNCTION keyspace.func ( param1 int , param2 text) CALLED ON NULL INPUT RETURNS INT LANGUAGE javascript AS $$ return 5; $$;
================================================================================
CREATE OR REPLACE FUNCTION keyspace.func ( param1 int , param2 text) CALLED ON NULL INPUT RETURNS INT LANGUAGE javascript AS $$ return 5; $$;
--------------------------------------------------------------------------------

(source_file
  (create_function
    (function_name)
    (typed_name
      (data_type
        (data_type_name)))
    (typed_name
      (data_type
        (data_type_name)))
    (return_mode)
    (data_type
      (data_type_name))))

================================================================================
CREATE OR REPLACE FUNCTION keyspace.func ( param1 int , param2 text) RETURNS NULL ON NULL INPUT RETURNS text LANGUAGE javascript AS $$ return 'hello'; $$;
================================================================================
CREATE OR REPLACE FUNCTION keyspace.func ( param1 int , param2 text) RETURNS NULL ON NULL INPUT RETURNS text LANGUAGE javascript AS $$ return 'hello'; $$;
--------------------------------------------------------------------------------

(source_file
  (create_function
    (function_name)
    (typed_name
      (data_type
        (data_type_name)))
    (typed_name
      (data_type
        (data_type_name)))
    (return_mode)
    (data_type
      (data_type_name))))

================================================================================
CREATE FUNCTION IF NOT EXISTS func ( param1 int , param2 text) CALLED ON NULL INPUT RETURNS INT LANGUAGE javascript AS $$ return 5; $$;
================================================================================
CREATE FUNCTION IF NOT EXISTS func ( param1 int , param2 text) CALLED ON NULL INPUT RETURNS INT LANGUAGE javascript AS $$ return 5; $$;
--------------------------------------------------------------------------------

(source_file
  (create_function
    (function_name)
    (typed_name
      (data_type
        (data_type_name)))
    (typed_name
      (data_type
        (data_type_name)))
    (return_mode)
    (data_type
      (data_type_name))))
