================================================================================
CREATE ROLE coach WITH PASSWORD = 'All4One2day!' AND LOGIN = true;
================================================================================
CREATE ROLE coach
    WITH PASSWORD = 'All4One2day!'
    AND LOGIN = true;
--------------------------------------------------------------------------------

(source_file
  (create_role
    (role_with
        (role_with_options
          (string_literal)))
      (role_with_options
        (boolean_literal)))))
