works like std::vector
=> if we exceed capacity, multiply it by 2

to add functionality for other data types:
1. Create a struct like the following example:
typedef struct
{
  datatype *data;
  size_t len;
  size_t capacity;
} Array_Datatype;

2. Create the necessary functions using the macros like the following example:
ARRAY_INIT(Array_Datatype, datatype)
ARRAY_ADD(Array_Datatype, datatype)
