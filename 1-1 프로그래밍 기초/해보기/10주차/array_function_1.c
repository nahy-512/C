#include <stdio.h>
//최대값 찾기

int maximun (int [], int); /* prototype */

int main(void) {
  int values[5], i, max;

  printf("Enter 5 numbers\n");
  for (i = 0; i < 5; i++)
    scanf("%d", &values[i]);
  max = maximum(values, 5); /* call */
  printf("\nMaximum value is %d\n", max);
}

int maximum (int values[5], N) /* definition */
{
  int max_value, i;

  max_value = values[0];
  for (i = 0; i < N; i++)
    if (max_value < values[i])
      max_value = values[i];
  return max_value;
}