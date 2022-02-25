================================================================================
DELETE firstname, lastname FROM cycling.cyclist_name WHERE id = e7ae5cf3-d358-4d99-b900-85902fda9bb0;
================================================================================
DELETE firstname, lastname FROM cycling.cyclist_name
WHERE id = e7ae5cf3-d358-4d99-b900-85902fda9bb0;
--------------------------------------------------------------------------------

(source_file
  (ERROR
    (delete_column_list
      (delete_column_item
        (object_name))
      (delete_column_item
        (object_name)))
    (from_spec
      (from_spec_element))
    (object_name)
    (UNEXPECTED '7')
    (UNEXPECTED '3')
    (UNEXPECTED '4')
    (UNEXPECTED '9')
    (UNEXPECTED '8')))

================================================================================
DELETE FROM cycling.cyclist_name WHERE id =e7ae5cf3-d358-4d99-b900-85902fda9bb0 if firstname='Alex' and lastname='Smith';
================================================================================
DELETE FROM cycling.cyclist_name
WHERE id =e7ae5cf3-d358-4d99-b900-85902fda9bb0
if firstname='Alex' and lastname='Smith';
--------------------------------------------------------------------------------

(source_file
  (ERROR
    (object_name)
    (UNEXPECTED 'y')
    (UNEXPECTED '.')
    (UNEXPECTED 'y')
    (UNEXPECTED '_')
    (UNEXPECTED 'd')
    (UNEXPECTED '7')
    (UNEXPECTED '3')
    (UNEXPECTED '4')
    (UNEXPECTED '9')
    (UNEXPECTED '8')
    (UNEXPECTED 'r')
    (string_literal)
    (UNEXPECTED 's')
    (string_literal)))

================================================================================
DELETE id FROM cyclist_id WHERE lastname = 'WELTEN' and firstname = 'Bram' IF EXISTS;
================================================================================
DELETE id FROM cyclist_id
WHERE lastname = 'WELTEN' and firstname = 'Bram'
IF EXISTS;
--------------------------------------------------------------------------------

(source_file
  (ERROR
    (delete_column_list
      (delete_column_item
        (object_name)))
    (from_spec
      (from_spec_element))
    (object_name)
    (string_literal)
    (UNEXPECTED 'r')
    (string_literal)))
