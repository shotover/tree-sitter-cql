================================================================================
UPDATE cycling.cyclist_name SET comments ='Rides hard, gets along with others, a real winner' WHERE id = fb372533-eb95-4bb4-8685-6ef61e994caa IF EXISTS;
================================================================================
UPDATE cycling.cyclist_name
SET comments ='Rides hard, gets along with others, a real winner'
WHERE id = fb372533-eb95-4bb4-8685-6ef61e994caa IF EXISTS;
--------------------------------------------------------------------------------



================================================================================
UPDATE cycling.cyclists SET firstname = 'Marianne', lastname = 'VOS' WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
================================================================================
UPDATE cycling.cyclists
SET firstname = 'Marianne',
    lastname = 'VOS'
WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
--------------------------------------------------------------------------------
(source_file
    (update
    (keyspace
    (object_name))
    (table
    (object_name))
    (assignment_element
    (object_name)
    (constant
    (string_literal)))
    (assignment_element
    (object_name)
    (constant
    (string_literal)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (uuid)))))))


================================================================================
UPDATE cycling.upcoming_calendar SET events = ['Tour de France'] + events WHERE year=2015 AND month=06;
================================================================================
    UPDATE cycling.upcoming_calendar
    SET events = ['Tour de France'] + events WHERE year=2015 AND month=06;
--------------------------------------------------------------------------------
(source_file
    (update
    (keyspace
    (object_name))
    (table
    (object_name))
    (assignment_element
    (object_name)
    (assignment_list
    (constant
    (string_literal)))
    (object_name))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (decimal_literal)))
    (relation_element
    (object_name)
    (constant
    (decimal_literal)))))))


================================================================================
UPDATE users SET state = 'TX' WHERE user_uuid IN (88b8fd18-b1ed-4e96-bf79-4280797cba80, 06a8913c-c0d6-477c-937d-6c1b69a95d43, bc108776-7cb5-477f-917d-869c12dfffa8);
================================================================================
    UPDATE users
    SET state = 'TX'
    WHERE user_uuid
    IN (88b8fd18-b1ed-4e96-bf79-4280797cba80,
        06a8913c-c0d6-477c-937d-6c1b69a95d43,
        bc108776-7cb5-477f-917d-869c12dfffa8);
--------------------------------------------------------------------------------
(source_file
    (update
    (table
    (object_name))
    (assignment_element
    (object_name)
    (constant
    (string_literal)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (function_args
    (constant
    (uuid))
    (constant
    (uuid))
    (constant
    (uuid))))))))


================================================================================
UPDATE cyclist.cyclist_career_teams SET teams = teams + {'Team DSB - Ballast Nedam'} WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
================================================================================
    UPDATE cyclist.cyclist_career_teams SET teams = teams + {'Team DSB - Ballast Nedam'} WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
--------------------------------------------------------------------------------
(source_file
    (update
    (keyspace
    (object_name))
    (table
    (object_name))
    (assignment_element
    (object_name)
    (object_name)
    (assignment_set
    (constant
    (string_literal))))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (uuid)))))))


================================================================================
UPDATE cyclist.cyclist_career_teams SET teams = teams - {'WOMBATS'} WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
================================================================================
    UPDATE cyclist.cyclist_career_teams SET teams = teams - {'WOMBATS'} WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
--------------------------------------------------------------------------------
source_file
(update
     (keyspace
     (object_name))
     (table
     (object_name))
     (assignment_element
     (object_name)
     (object_name)
     (assignment_set
     (constant
     (string_literal))))
     (where_spec
     (relation_elements
     (relation_element
     (object_name)
     (constant
     (uuid)))))))


================================================================================
UPDATE cyclist.cyclist_career_teams SET teams = {} WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
================================================================================
    UPDATE cyclist.cyclist_career_teams SET teams = {} WHERE id = 88b8fd18-b1ed-4e96-bf79-4280797cba80;
--------------------------------------------------------------------------------
(source_file
    (update
    (keyspace
    (object_name))
    (table
    (object_name))
    (assignment_element
    (object_name)
    (assignment_set))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (uuid)))))))