================================================================================
ALTER TYPE cycling.fullname RENAME middlename TO middle AND lastname to last AND firstname to first;
================================================================================
ALTER TYPE cycling.fullname
    RENAME middlename TO middle
    AND lastname to last
    AND firstname to first;
--------------------------------------------------------------------------------

(source_file
  (alter_type
    (alter_type_operation
      (alter_type_rename
        (alter_type_rename_list
          (alter_type_rename_item)
          (alter_type_rename_item)
          (alter_type_rename_item))))))
