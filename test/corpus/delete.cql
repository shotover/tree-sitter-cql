================================================================================
DELETE firstname, lastname FROM cycling.cyclist_name WHERE id = e7ae5cf3-d358-4d99-b900-85902fda9bb0;
================================================================================
DELETE firstname, lastname FROM cycling.cyclist_name
WHERE id = e7ae5cf3-d358-4d99-b900-85902fda9bb0;
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (delete_column_list
      (delete_column_item
        (object_name))
      (delete_column_item
        (object_name)))
    (from_spec)
    (where_spec
      (relation_elements
        (relation_element
          (constant
            (uuid)))))))

================================================================================
DELETE FROM cycling.cyclist_name WHERE id =e7ae5cf3-d358-4d99-b900-85902fda9bb0 if firstname='Alex' and lastname='Smith';
================================================================================
DELETE FROM cycling.cyclist_name
WHERE id =e7ae5cf3-d358-4d99-b900-85902fda9bb0
if firstname='Alex' and lastname='Smith';
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (from_spec)
    (where_spec
      (relation_elements
        (relation_element
          (constant
            (uuid)))))
    (if_spec
      (if_condition_list
        (if_condition
          (object_name)
          (constant
            (string_literal)))
        (if_condition
          (object_name)
          (constant
            (string_literal)))))))

================================================================================
DELETE id FROM cyclist_id WHERE lastname = 'WELTEN' and firstname = 'Bram' IF EXISTS;
================================================================================
DELETE id FROM cyclist_id
WHERE lastname = 'WELTEN' and firstname = 'Bram'
IF EXISTS;
--------------------------------------------------------------------------------

(source_file
  (delete_statement
    (delete_column_list
      (delete_column_item
        (object_name)))
    (from_spec)
    (where_spec
      (relation_elements
        (relation_element
          (constant
            (string_literal)))
        (relation_element
          (constant
            (string_literal)))))))
