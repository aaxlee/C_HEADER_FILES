#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_FUNCTIONS(array_type, element_type, suffix_name)                                           \
  array_type create_array_##suffix_name()                                                                \
  {                                                                                                      \
    array_type a;                                                                                        \
    a.capacity = 1;                                                                                      \
    a.len = 0;                                                                                           \
    a.data = (element_type*)malloc(a.capacity * sizeof(element_type));                                   \
    return a;                                                                                            \
  }                                                                                                      \
  void array_add_##suffix_name(array_type *array, element_type element)                                  \
  {                                                                                                      \
    if (array->len >= array->capacity) {                                                                 \
      array->capacity *= 2;                                                                              \
      array->data = (element_type*)realloc(array->data, array->capacity * sizeof(element_type));         \
    }                                                                                                    \
    array->data[array->len] = (element);                                                                 \
    array->len++;                                                                                        \
  }                                                                                                      \

typedef struct Array_Int
{
  int *data;
  size_t len;
  size_t capacity;
} Array_Int;

typedef struct Array_Float
{
  float *data;
  size_t len;
  size_t capacity;
} Array_Float;

typedef struct Array_Char
{
  char *data;
  size_t len;
  size_t capacity;
} Array_Char;

typedef struct Array_String
{
    char **data;
    size_t len;
    size_t capacity;
} Array_String;

ARRAY_FUNCTIONS(Array_Int, int, int)
ARRAY_FUNCTIONS(Array_Float, float, float)
ARRAY_FUNCTIONS(Array_Char, char, char)
ARRAY_FUNCTIONS(Array_String, char*, string)

#endif /* ARRAY_H */
