================================================================================
GRANT SELECT ON ALL KEYSPACES TO coach;
================================================================================
GRANT SELECT ON ALL KEYSPACES TO coach;
--------------------------------------------------------------------------------

(source_file
  (grant
    (priviledge)
    (ERROR
      (keyspace))
    (resource
      (table))
    (role)))

================================================================================
GRANT MODIFY ON KEYSPACE field TO manager;
================================================================================
GRANT MODIFY ON KEYSPACE field TO manager;
--------------------------------------------------------------------------------

(source_file
  (grant
    (priviledge)
    (resource
      (table))
    (ERROR
      (UNEXPECTED 'e'))
    (role)))

================================================================================
GRANT ALTER ON KEYSPACE cycling TO coach;
================================================================================
GRANT ALTER ON KEYSPACE cycling TO coach;
--------------------------------------------------------------------------------

(source_file
  (grant
    (priviledge)
    (resource
      (table))
    (ERROR
      (UNEXPECTED 'y')
      (UNEXPECTED '))
    (role)))

================================================================================
GRANT ALL PERMISSIONS ON cycling.name TO coach;
================================================================================
GRANT ALL PERMISSIONS ON cycling.name TO coach;
--------------------------------------------------------------------------------

(source_file
  (grant
    (priviledge)
    (resource
      (keyspace)
      (table))
    (role)))

================================================================================
GRANT ALL ON KEYSPACE cycling TO cycling_admin;
================================================================================
GRANT ALL ON KEYSPACE cycling TO cycling_admin;
--------------------------------------------------------------------------------

(source_file
  (grant
    (priviledge)
    (resource
      (table))
    (ERROR
      (UNEXPECTED 'y')
      (UNEXPECTED '))
    (role)))
