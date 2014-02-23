#ifndef _H_TLIBC_ABSTRACT_READR
#define _H_TLIBC_ABSTRACT_READR

#include <stdint.h>
#include "tlibc/core/tlibc_error_code.h"

typedef struct _TLIBC_ABSTRACT_READER TLIBC_ABSTRACT_READER;
struct _TLIBC_ABSTRACT_READER
{
	TLIBC_ERROR_CODE (*read_struct_begin)(TLIBC_ABSTRACT_READER *self, const char *struct_name);
	TLIBC_ERROR_CODE (*read_struct_end)(TLIBC_ABSTRACT_READER *self, const char *struct_name);
	TLIBC_ERROR_CODE (*read_union_begin)(TLIBC_ABSTRACT_READER *self, const char *union_name);
	TLIBC_ERROR_CODE (*read_union_end)(TLIBC_ABSTRACT_READER *self, const char *union_name);
	TLIBC_ERROR_CODE (*read_enum_begin)(TLIBC_ABSTRACT_READER *self, const char *enum_name);
	TLIBC_ERROR_CODE (*read_enum_end)(TLIBC_ABSTRACT_READER *self, const char *enum_name);
	TLIBC_ERROR_CODE (*read_vector_begin)(TLIBC_ABSTRACT_READER *self);
	TLIBC_ERROR_CODE (*read_vector_end)(TLIBC_ABSTRACT_READER *self);
	TLIBC_ERROR_CODE (*read_vector_element_begin)(TLIBC_ABSTRACT_READER *self, const char *var_name, uint32_t index);
	TLIBC_ERROR_CODE (*read_vector_element_end)(TLIBC_ABSTRACT_READER *self, const char *var_name, uint32_t index);
	TLIBC_ERROR_CODE (*read_field_begin)(TLIBC_ABSTRACT_READER *self, const char *var_name);
	TLIBC_ERROR_CODE (*read_field_end)(TLIBC_ABSTRACT_READER *self, const char *var_name);

	TLIBC_ERROR_CODE (*read_int8_t)(TLIBC_ABSTRACT_READER *self, int8_t *val);
	TLIBC_ERROR_CODE (*read_int16_t)(TLIBC_ABSTRACT_READER *self, int16_t *val);
	TLIBC_ERROR_CODE (*read_int32_t)(TLIBC_ABSTRACT_READER *self, int32_t *val);
	TLIBC_ERROR_CODE (*read_int64_t)(TLIBC_ABSTRACT_READER *self, int64_t *val);
	TLIBC_ERROR_CODE (*read_uint8_t)(TLIBC_ABSTRACT_READER *self, uint8_t *val);
	TLIBC_ERROR_CODE (*read_uint16_t)(TLIBC_ABSTRACT_READER *self, uint16_t *val);
	TLIBC_ERROR_CODE (*read_uint32_t)(TLIBC_ABSTRACT_READER *self, uint32_t *val);
	TLIBC_ERROR_CODE (*read_uint64_t)(TLIBC_ABSTRACT_READER *self, uint64_t *val);
	TLIBC_ERROR_CODE (*read_char)(TLIBC_ABSTRACT_READER *self, char *val);
	TLIBC_ERROR_CODE (*read_double)(TLIBC_ABSTRACT_READER *self, double *val);
	TLIBC_ERROR_CODE (*read_string)(TLIBC_ABSTRACT_READER *self, char* str, uint32_t str_length);
};

 void tlibc_abstract_reader_init(TLIBC_ABSTRACT_READER *self);

 TLIBC_ERROR_CODE tlibc_read_struct_begin(TLIBC_ABSTRACT_READER *self, const char *struct_name);
 TLIBC_ERROR_CODE tlibc_read_struct_end(TLIBC_ABSTRACT_READER *self, const char *struct_name);
 TLIBC_ERROR_CODE tlibc_read_union_begin(TLIBC_ABSTRACT_READER *self, const char *union_name);
 TLIBC_ERROR_CODE tlibc_read_union_end(TLIBC_ABSTRACT_READER *self, const char *union_name);
 TLIBC_ERROR_CODE tlibc_read_enum_begin(TLIBC_ABSTRACT_READER *self, const char *enum_name);
 TLIBC_ERROR_CODE tlibc_read_enum_end(TLIBC_ABSTRACT_READER *self, const char *enum_name);
 TLIBC_ERROR_CODE tlibc_read_vector_begin(TLIBC_ABSTRACT_READER *self);
 TLIBC_ERROR_CODE tlibc_read_vector_end(TLIBC_ABSTRACT_READER *self);
 TLIBC_ERROR_CODE tlibc_read_field_begin(TLIBC_ABSTRACT_READER *self, const char *var_name);
 TLIBC_ERROR_CODE tlibc_read_field_end(TLIBC_ABSTRACT_READER *self, const char *var_name);
 TLIBC_ERROR_CODE tlibc_read_vector_element_begin(TLIBC_ABSTRACT_READER *self, const char *var_name, uint32_t index);
 TLIBC_ERROR_CODE tlibc_read_vector_element_end(TLIBC_ABSTRACT_READER *self, const char *var_name, uint32_t index);

 TLIBC_ERROR_CODE tlibc_read_int8_t(TLIBC_ABSTRACT_READER *self, int8_t *val);
 TLIBC_ERROR_CODE tlibc_read_int16_t(TLIBC_ABSTRACT_READER *self, int16_t *val);
 TLIBC_ERROR_CODE tlibc_read_int32_t(TLIBC_ABSTRACT_READER *self, int32_t *val);
 TLIBC_ERROR_CODE tlibc_read_int64_t(TLIBC_ABSTRACT_READER *self, int64_t *val);
 TLIBC_ERROR_CODE tlibc_read_uint8_t(TLIBC_ABSTRACT_READER *self, uint8_t *val);
 TLIBC_ERROR_CODE tlibc_read_uint16_t(TLIBC_ABSTRACT_READER *self, uint16_t *val);
 TLIBC_ERROR_CODE tlibc_read_uint32_t(TLIBC_ABSTRACT_READER *self, uint32_t *val);
 TLIBC_ERROR_CODE tlibc_read_uint64_t(TLIBC_ABSTRACT_READER *self, uint64_t *val);
 TLIBC_ERROR_CODE tlibc_read_char(TLIBC_ABSTRACT_READER *self, char *val);
 TLIBC_ERROR_CODE tlibc_read_double(TLIBC_ABSTRACT_READER *self, double *val);
 TLIBC_ERROR_CODE tlibc_read_string(TLIBC_ABSTRACT_READER *self, char* str, uint32_t str_length);

#endif

