================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 UPDATE keyspace.table SET col1 = 'foo' WHERE col2=5;
================================================================================
BEGIN LOGGED BATCH USING TIMESTAMP 5 UPDATE keyspace.table SET col1 = 'foo' WHERE col2=5;
--------------------------------------------------------------------------------
(source_file (update (begin_batch (using_timestamp_spec (timestamp))) (assignment_element (object_name) (constant)) (where_spec (relation_elements (relation_element (object_name) (constant))))))

================================================================================
UPDATE keyspace.table USING TIMESTAMP 3 SET col1 = 'foo' WHERE col2=5;
================================================================================
UPDATE keyspace.table USING TIMESTAMP 3 SET col1 = 'foo' WHERE col2=5;
--------------------------------------------------------------------------------
(source_file (update (using_ttl_timestamp (timestamp)) (assignment_element (object_name) (constant)) (where_spec (relation_elements (relation_element (object_name) (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = 'foo' WHERE col2=5 IF EXISTS;
================================================================================
UPDATE keyspace.table SET col1 = 'foo' WHERE col2=5 IF EXISTS;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (constant)) (where_spec (relation_elements (relation_element (object_name) (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = 'foo' WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = 'foo' WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (constant)) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = { 5 : 'hello', 'world' : 5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = { 5 : 'hello', 'world' : 5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (assignment_map (constant) (constant) (constant) (constant))) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = {  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = {  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (assignment_set (constant) (constant))) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = [  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 ] WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = [  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 ] WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (assignment_list (constant) (constant))) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = col2+5 WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = col2+5 WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (object_name)) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = col2+{ 5 : 'hello', 'world' : 5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = col2+{ 5 : 'hello', 'world' : 5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (object_name) (assignment_map (constant) (constant) (constant) (constant))) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = { 5 : 'hello', 'world' : 5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } - col2 WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = { 5 : 'hello', 'world' : 5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } - col2 WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (assignment_map (constant) (constant) (constant) (constant)) (object_name)) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = col2 + {  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 }  WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = col2 + {  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 }  WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (object_name) (assignment_set (constant) (constant))) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = {  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } - col2 WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = {  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 } - col2 WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (assignment_set (constant) (constant)) (object_name)) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = col2+[  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 ] WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = col2+[  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 ] WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (object_name) (assignment_list (constant) (constant))) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1 = [  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 ]+col2 WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1 = [  'hello',  5b6962dd-3f90-4c93-8f61-eabfa4a803e2 ]+col2 WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (assignment_list (constant) (constant)) (object_name)) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table SET col1[5] = 'hello' WHERE col2=5 IF col3=7;
================================================================================
UPDATE keyspace.table SET col1[5] = 'hello' WHERE col2=5 IF col3=7;
--------------------------------------------------------------------------------
(source_file (update (assignment_element (object_name) (constant)) (where_spec (relation_elements (relation_element (object_name) (constant)))) (if_spec (if_condition_list (if_condition (constant))))))

================================================================================
UPDATE keyspace.table USING TIMESTAMP 3 SET col1 = 'foo' WHERE col2=5;
================================================================================
UPDATE keyspace.table USING TIMESTAMP 3 SET col1 = 'foo' WHERE col2=5;
--------------------------------------------------------------------------------
(source_file (update (using_ttl_timestamp (timestamp)) (assignment_element (object_name) (constant)) (where_spec (relation_elements (relation_element (object_name) (constant))))))

