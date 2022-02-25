================================================================================
ALTER TABLE cycling_comments WITH compression = { 'sstable_compression' : 'DeflateCompressor', 'chunk_length_kb' : 64 };
================================================================================
ALTER TABLE cycling_comments
    WITH compression = {
    'sstable_compression' : 'DeflateCompressor',
    'chunk_length_kb' : 64 };
--------------------------------------------------------------------------------

(source_file
  (alter_table
    (table)
    (alter_table_operation
      (alter_table_with
        (table_options
          (table_option_item
            (table_option_name)
            (ERROR)
            (table_option_value
              (string_literal)))))))
  (ERROR
    (string_literal)
    (string_literal)
    (UNEXPECTED '6')))
