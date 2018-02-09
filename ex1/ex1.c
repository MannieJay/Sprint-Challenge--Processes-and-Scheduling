#include <stdlib.h>
#include <stdio.h>

int *alloc_1d(int cols)
{
  int *arr = malloc(cols * sizeof(int));
  return arr;
}

void alloc_1d_example(void)
{
  int *array = alloc_1d(12);
  array[8] = 3490;
  *(array + 8) = 3490;

  printf("array[8] = %d\n", my_array[8]);
}