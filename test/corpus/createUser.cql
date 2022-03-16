================================================================================
CREATE USER newuser if not exists WITH PASSWORD 'password';
================================================================================
CREATE USER newuser if not exists WITH PASSWORD 'password';
--------------------------------------------------------------------------------

(source_file
  (ERROR
    (ERROR
      (user_name))
    (user_name)))

================================================================================
CREATE USER newuser WITH PASSWORD 'password' superuser;
================================================================================
CREATE USER newuser WITH PASSWORD 'password' superuser;
--------------------------------------------------------------------------------

(source_file
  (create_user
    (user_name)
    (user_with
      (user_password)
      (user_super_user))))

================================================================================
CREATE USER newuser WITH PASSWORD 'password' nosuperuser;
================================================================================
CREATE USER newuser WITH PASSWORD 'password' nosuperuser;
--------------------------------------------------------------------------------

(source_file
  (create_user
    (user_name)
    (user_with
      (user_password)
      (user_super_user))))
