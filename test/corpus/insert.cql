================================================================================
INSERT INTO cycling.cyclist_name (id, lastname, firstname) VALUES (6ab09bec-e68e-48d9-a5f8-97e6fb4c9b47, 'KRUIKSWIJK','Steven') USING TTL 86400 AND TIMESTAMP 123456789;
================================================================================
INSERT INTO cycling.cyclist_name (id, lastname, firstname)
  VALUES (6ab09bec-e68e-48d9-a5f8-97e6fb4c9b47, 'KRUIKSWIJK','Steven')
  USING TTL 86400 AND TIMESTAMP 123456789;
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant
            (uuid)))
        (expression
          (constant
            (string_literal)))
        (expression
          (constant
            (string_literal)))))
    (using_ttl_timestamp
      (ttl
        (decimal_literal))
      (timestamp
        (decimal_literal)))))

================================================================================
INSERT INTO cycling.cyclist_categories (id,lastname,categories) VALUES('6ab09bec-e68e-48d9-a5f8-97e6fb4c9b47', 'KRUIJSWIJK', {'GC', 'Time-trial', 'Sprint'});
================================================================================
INSERT INTO cycling.cyclist_categories (id,lastname,categories)
  VALUES(
    '6ab09bec-e68e-48d9-a5f8-97e6fb4c9b47',
    'KRUIJSWIJK',
    {'GC', 'Time-trial', 'Sprint'});
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant
            (string_literal)))
        (expression
          (constant
            (string_literal)))
        (expression
          (assignment_set
            (constant
              (string_literal))
            (constant
              (string_literal))
            (constant
              (string_literal))))))))

================================================================================
INSERT INTO cycling.cyclist_categories JSON '{"category": "", "points":780, "id": "6ab09bec-e68e-48d9-a5f8-97e6fb4c9b47"}';
================================================================================
INSERT INTO cycling.cyclist_categories JSON
    '{"category": "", "points":780, "id": "6ab09bec-e68e-48d9-a5f8-97e6fb4c9b47"}';
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (insert_values_spec
      (constant
        (string_literal)))))

================================================================================
INSERT INTO cycling.cyclist_teams (id,lastname,teams) VALUES(5b6962dd-3f90-4c93-8f61-eabfa4a803e2,'VOS',$$Women's Tour of New Zealand$$);
================================================================================
INSERT INTO cycling.cyclist_teams (id,lastname,teams)
    VALUES(5b6962dd-3f90-4c93-8f61-eabfa4a803e2,''VOS'',$$Women''s Tour of New Zealand$$);
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant
            (uuid)))
        (expression
          (constant
            (string_literal)))
       
        (expression
          (constant
            (code_block)))))))

================================================================================
INSERT INTO cycling.route(race_id,race_name,lat_long) VALUES (500, 'Name', ('Champagne', (46.833,6.65)));
================================================================================
INSERT INTO cycling.route(race_id,race_name,lat_long) VALUES (500, 'Name', ('Champagne', (46.833,6.65)));
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant
            (decimal_literal)))
        (expression
          (constant
            (string_literal)))
        (expression
          (assignment_tuple
            (constant
              (string_literal))
            (assignment_tuple
              (constant
                (float_literal))
              (constant
                (float_literal)))))))))

================================================================================
INSERT INTO "students"("id", "address", "name", "[age]", "age", "colu'mn1", "colu68mn1", "height") values    (740, 'hongkong','alice',null,32,'','',172);
================================================================================
INSERT INTO "students"("id", "address", "name", "[age]", "age", "colu'mn1", "colu68mn1", "height") values
    (740, 'hongkong','alice',null,32,'','',172);
--------------------------------------------------------------------------------

(source_file
  )

================================================================================
INSERT INTO test(a,b,c,d) values(1,['listtext1','listtext2'],{'settext1','settext2'},{'mapkey1':'mapvale2','mapkey2':'mapvalue2'});
================================================================================
INSERT INTO test(a,b,c,d) values(1,['listtext1','listtext2'],{'settext1','settext2'},{'mapkey1':'mapvale2','mapkey2':'mapvalue2'});
--------------------------------------------------------------------------------

(source_file
  (insert_statement
    (insert_column_spec
      (column_list))
    (insert_values_spec
      (expression_list
        (expression
          (constant
            (decimal_literal)))
        (expression
          (assignment_list
            (constant
              (string_literal))
            (constant
              (string_literal))))
        (expression
          (assignment_set
            (constant
              (string_literal))
            (constant
              (string_literal))))
        (expression
          (assignment_map
            (constant
              (string_literal))
            (constant
              (string_literal))
            (constant
              (string_literal))
            (constant
              (string_literal))))))))
