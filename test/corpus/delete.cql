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
DELETE FROM cycling.cyclist_name WHERE id =e7ae5cf3-d358-4d99-b900-85902fda9bb0 if firstname='Alex' and lastname='Smith';
================================================================================
DELETE FROM cycling.cyclist_name
WHERE id =e7ae5cf3-d358-4d99-b900-85902fda9bb0
if firstname='Alex' and lastname='Smith';
--------------------------------------------------------------------------------

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
    (from_spec
    (from_spec_element
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
    (string_literal))))))

