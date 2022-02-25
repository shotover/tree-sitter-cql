================================================================================
CREATE AGGREGATE cycling.average(int) SFUNC avgState STYPE tuple<int,bigint> FINALFUNC avgFinal INITCOND (0,0);
================================================================================
CREATE AGGREGATE cycling.average(int)
SFUNC avgState
STYPE tuple<int,bigint>
FINALFUNC avgFinal
INITCOND (0,0);
--------------------------------------------------------------------------------

(source_file
  (create_aggregate
    (data_type
      (data_type_name
        (object_name)))
    (data_type
      (data_type_name
        (object_name))
      (data_type_definition
        (data_type_name
          (object_name))
        (data_type_name
          (object_name))))
    (init_cond_definition
      (init_cond_list
        (constant
          (decimal_literal))
        (constant
          (decimal_literal))))))
