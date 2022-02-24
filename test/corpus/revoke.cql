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
    (keyspace
    (object_name))
    (table
    (object_name)))
    (role
    (object_name))))

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
    (keyspace
    (object_name)))
    (resource
    (table
    (object_name)))
    (role
    (object_name))))