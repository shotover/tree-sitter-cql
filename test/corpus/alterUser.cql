================================================================================
ALTER USER username WITH PASSWORD 'password';
================================================================================
ALTER USER username WITH PASSWORD 'password';
--------------------------------------------------------------------------------
(source_file (alter_user (user_name) (user_password)))

================================================================================
ALTER USER username WITH PASSWORD 'password' superuser;
================================================================================
ALTER USER username WITH PASSWORD 'password' superuser;
--------------------------------------------------------------------------------
(source_file (alter_user (user_name) (user_password) (user_super_user)))

================================================================================
ALTER USER username WITH PASSWORD 'password' nosuperuser;
================================================================================
ALTER USER username WITH PASSWORD 'password' nosuperuser;
--------------------------------------------------------------------------------
(source_file (alter_user (user_name) (user_password) (user_super_user)))