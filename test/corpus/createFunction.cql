================================================================================
CREATE OR REPLACE FUNCTION cycling.avgFinal ( state tuple<int,bigint> ) CALLED ON NULL INPUT
RETURNS double LANGUAGE java AS  $$ double r = 0;
     if (state.getInt(0) == 0) return null; 
     r = state.getLong(1); 
     r/= state.getInt(0); 
     return Double.valueOf(r); $$;
================================================================================
CREATE OR REPLACE FUNCTION cycling.avgFinal ( state tuple<int,bigint> )
CALLED ON NULL INPUT
RETURNS double
LANGUAGE java AS
  $$ double r = 0;
     if (state.getInt(0) == 0) return null;
     r = state.getLong(1);
     r/= state.getInt(0);
return Double.valueOf(r); $$
;
--------------------------------------------------------------------------------
(source_file
    (create_function
    (or_replace)
    (keyspace
    (object_name))
    (function
    (object_name))
    (param
    (object_name)
    (data_type
    (data_type_name
    (object_name))
    (data_type_definition
    (data_type_name
    (object_name))
    (data_type_name
    (object_name)))))
    (return_mode)
    (data_type
    (data_type_name
    (object_name)))
    (language
    (object_name))
    (code_block)))