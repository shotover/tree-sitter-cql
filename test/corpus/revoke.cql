================================================================================
REVOKE SELECT ON cycling.name FROM manager;
================================================================================
REVOKE SELECT
       ON cycling.name
       FROM manager;
--------------------------------------------------------------------------------

(source_file
  (revoke
    (priviledge)
    (resource
      (keyspace)
      (table))
    (role)))

================================================================================
REVOKE ALTER ON ALL ROLES FROM coach;
================================================================================
REVOKE ALTER
ON ALL ROLES
FROM coach;
--------------------------------------------------------------------------------

(source_file
  (revoke
    (priviledge)
    (ERROR
      (keyspace))
    (resource
      (table))
    (role)))
