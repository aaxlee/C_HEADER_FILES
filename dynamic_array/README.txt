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
ARRAY_FUNCTIONS(Array_Datatype, datatype)

3. You can now create a dynamic array that stores the desired data type:
Array_Datatype arr = create_array_datatype();
array_add_datatype(&arr, datatype element);
