================================================================================
SELECT event_id, dateOf(created_at) AS creation_date, blobAsText(content) AS content FROM timeline;
================================================================================

SELECT event_id,
  dateOf(created_at) AS creation_date,
  blobAsText(content) AS content 
  FROM timeline;

--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
        (select_element (object_name))
        (select_element (function_call (function_name (object_name)) (function_args (object_name))) (object_name))
        (select_element (function_call (function_name (object_name)) (function_args (object_name))) (object_name))
    )
    (from_spec (from_spec_element (object_name)))))


================================================================================
SELECT COUNT(*) FROM system.IndexInfo;
================================================================================

  SELECT COUNT(*) 
FROM system.IndexInfo;

--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements (select_element (function_call (function_name (object_name)))))
    (from_spec (from_spec_element (object_name) (object_name)))))

================================================================================
SELECT lastname FROM cycling.cyclist_name LIMIT 50000;
================================================================================

SELECT lastname 
FROM cycling.cyclist_name 
LIMIT 50000;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
    (select_element
    (object_name)))
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (limit_spec
    (decimal_literal))))



================================================================================
SELECT id, lastname, teams FROM cycling.cyclist_career_teams WHERE id=5b6962dd-3f90-4c93-8f61-eabfa4a803e2;
================================================================================

SELECT id, lastname, teams
FROM cycling.cyclist_career_teams
WHERE id=5b6962dd-3f90-4c93-8f61-eabfa4a803e2;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
    (select_element
    (object_name))
    (select_element
    (object_name))
    (select_element
    (object_name)))
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (uuid)))))))


================================================================================
SELECT * FROM cycling.cyclist_category;
================================================================================

SELECT * FROM cycling.cyclist_category;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name))))
)

================================================================================
SELECT * FROM cycling.cyclist_category WHERE category = 'SPRINT';
================================================================================

SELECT * FROM cycling.cyclist_category WHERE category = 'SPRINT';
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (string_literal)))))))


================================================================================
SELECT category, points, lastname FROM cycling.cyclist_category;
================================================================================

SELECT category, points, lastname FROM cycling.cyclist_category;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
    (select_element
    (object_name))
    (select_element
    (object_name))
    (select_element
    (object_name)))
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))))

================================================================================
SELECT * From cycling.cyclist_name LIMIT 3;
================================================================================

SELECT * From cycling.cyclist_name LIMIT 3;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (limit_spec
    (decimal_literal))))


================================================================================
SELECT * FROM cycling.cyclist_cat_pts WHERE category = 'GC' ORDER BY points ASC;
================================================================================

SELECT * FROM cycling.cyclist_cat_pts WHERE category = 'GC' ORDER BY points ASC;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (string_literal)))))
    (order_spec
    (order_spec_element
    (object_name)
    (order_direction)))))

================================================================================
SELECT race_name, point_id, lat_long AS CITY_LATITUDE_LONGITUDE FROM cycling.route;
================================================================================

SELECT race_name, point_id, lat_long AS CITY_LATITUDE_LONGITUDE FROM cycling.route;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
    (select_element
    (object_name))
    (select_element
    (object_name))
    (select_element
    (object_name)
    (object_name)))
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))))

================================================================================
SELECT * FROM cycling.upcoming_calendar WHERE year = 2015 AND month = 06;
================================================================================

SELECT * FROM cycling.upcoming_calendar WHERE year = 2015 AND month = 06;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
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
select json name, checkin_id, time_stamp from checkin;
================================================================================

select json name, checkin_id, time_stamp from checkin;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
    (select_element
    (object_name))
    (select_element
    (object_name))
    (select_element
    (object_name)))
    (from_spec
    (from_spec_element
    (object_name)))))

================================================================================
select name, checkin_id, toJson(time_stamp) from checkin
================================================================================

select name, checkin_id, toJson(time_stamp) from checkin;
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements
    (select_element
    (object_name))
    (select_element
    (object_name))
    (select_element
    (function_call
    (function_name
    (object_name))
    (function_args
    (object_name)))))
    (from_spec
    (from_spec_element
    (object_name)))))





================================================================================
SELECT * FROM cycling.calendar WHERE race_id IN (100, 101, 102) AND (race_start_date, race_end_date) IN (('2015-01-01','2015-02-02'), ('2016-01-01','2016-02-02'));
================================================================================

SELECT * FROM cycling.calendar WHERE race_id IN (100, 101, 102) AND (race_start_date, race_end_date) IN (('2015-01-01','2015-02-02'), ('2016-01-01','2016-02-02'));
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (function_args
    (constant
    (decimal_literal))
    (constant
    (decimal_literal))
    (constant
    (decimal_literal))))

    (relation_element
    (object_name)
    (object_name)
    (assignment_tuple
    (constant
    (string_literal))
    (constant
    (string_literal)))

    (assignment_tuple
    (constant
    (string_literal))
    (constant
    (string_literal))))))))


================================================================================
SELECT * FROM cycling.calendar WHERE race_id IN (100, 101, 102) AND (race_start, race_end) >= ('2015-01-01', '2015-02-02');
================================================================================

SELECT * FROM cycling.calendar WHERE race_id IN (100, 101, 102) AND (race_start, race_end) >= ('2015-01-01', '2015-02-02');
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (function_args
    (constant
    (decimal_literal))
    (constant
    (decimal_literal))
    (constant
    (decimal_literal))))
    (relation_element
    (object_name)
    (object_name)
    (assignment_tuple
    (constant
    (string_literal))
    (constant
    (string_literal))))))))


================================================================================
SELECT * FROM cycling.race_times WHERE race_name = '17th Santos Tour Down Under' and race_time >= '19:15:19' AND race_time <= '19:15:39';
================================================================================

SELECT * FROM cycling.race_times WHERE race_name = '17th Santos Tour Down Under' and race_time >= '19:15:19' AND race_time <= '19:15:39';
--------------------------------------------------------------------------------
(source_file
    (select_statement
    (select_elements)
    (from_spec
    (from_spec_element
    (object_name)
    (object_name)))
    (where_spec
    (relation_elements
    (relation_element
    (object_name)
    (constant
    (string_literal)))

    (relation_element
    (object_name)
    (constant
    (string_literal)))

    (relation_element
    (object_name)
    (constant
    (string_literal)))))))


