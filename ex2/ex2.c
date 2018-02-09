#include <stdlib.h>
#include <stdio.h>

int **alloc_2d(int rows, int cols)
{
  int **array = (int **)malloc(rows * sizeof(int *));

  for (int i = 0; i < rows; i++)
  {
    array[i] = (int *)malloc(cols * sizeof(int));
  }
  return array;
}

int alloc_2d_example(void)
{
  int **arrayA = alloc_2d(5, 10);

  arrayA[2][3] = 3490;
  printf("arrayA[2][3] = %d\n", arrayA[2][3]);

  *(*(arrayA + 2) + 3) = 3491;
  printf("arrayA[2][3] = %d\n", arrayA[2][3]);

  free(arrayA);
}

int main(void)
{
  alloc_2d_example();
  return 0;
}
