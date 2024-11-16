#include <stdio.h>

#include "Array.h"

int main()
{
  Array_Int array = create_array_int();
  for (int i = 1; i < 11; i++) {
    array_add_int(&array, i);
  }

  for (int i = 0; i < array.len; i++) {
    printf("%d ", array.data[i]);
  }

  printf("Capacity: %d Length: %d\n", array.capacity, array.len);

  return 0;
}
