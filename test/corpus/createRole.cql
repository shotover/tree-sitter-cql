================================================================================
CREATE ROLE if not exists role;
================================================================================
CREATE ROLE if not exists role;
--------------------------------------------------------------------------------
(source_file (create_role))

================================================================================
CREATE ROLE 'role' WITH PASSWORD = 'password';
================================================================================
CREATE ROLE 'role' WITH PASSWORD = 'password';
--------------------------------------------------------------------------------
(source_file (create_role (role_with (role_with_options))))

================================================================================
CREATE ROLE role WITH LOGIN = true;
================================================================================
CREATE ROLE role WITH LOGIN = true;
--------------------------------------------------------------------------------
(source_file (create_role (role_with (role_with_options))))

================================================================================
CREATE ROLE role WITH SUPERUSER = true;
================================================================================
CREATE ROLE role WITH SUPERUSER = true;
--------------------------------------------------------------------------------
(source_file (create_role (role_with (role_with_options))))

================================================================================
CREATE ROLE role WITH OPTIONS = ( 'option1' : 'value', 'option2' : 4.5 );
================================================================================
CREATE ROLE role WITH OPTIONS = ( 'option1' : 'value', 'option2' : 4.5 );
--------------------------------------------------------------------------------
(source_file (create_role (role_with (role_with_options (option_hash (option_hash_item) (option_hash_item))))))

================================================================================
CREATE ROLE role WITH PASSWORD = 'password' AND SUPERUSER = false;
================================================================================
CREATE ROLE role WITH PASSWORD = 'password' AND SUPERUSER = false;
--------------------------------------------------------------------------------
(source_file (create_role (role_with (role_with_options) (role_with_options))))
