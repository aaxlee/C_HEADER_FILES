works like std::vector
=> if we exceed capacity, multiply it by 2

to add functionality for other data types:
1. Create a struct like the following example:
typedef struct Array_Datatype
{
  datatype *data;
  size_t len;
  size_t capacity;
} Array_Datatype;

2. Create the necessary functions to operate on the dynamic array by using the macro like the following example:
ARRAY_FUNCTIONS(Array_Datatype, datatype, suffix)
(suffix can be whatever you want)

3. You can now create a dynamic array that stores the desired data type:
Array_Datatype arr = create_array_suffix();
array_add_suffix(&arr, datatype element);

Another example:
...
typedef struct Array_String
{
    char **data;
    size_t len;
    size_t capacity;
} Array_String;

ARRAY_FUNCTIONS(Array_String, char*, string)
...
Array_String strings = create_array_string();
for (int i = 0 ; i < 11; i++) {
  array_add_string(&strings, "hello");
}
for (int i = 0; i < strings.len; i++) {
  printf("%s ", strings.data[i]);
}
