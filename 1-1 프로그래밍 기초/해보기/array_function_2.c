#include <stdio.h>
#define MAXNUM 1000
void findMax(int [MAXNUM]); /* prototype */

int main(void) {
  int numList[MAXNUM];
  for ( int i = 0; i < 5; i++)
    scanf("%d", &numList[i]);

  findMax(numList); /* call */
}

void findMax (int local_array[]) /* definition */
{
  int i, max = local_array[0];

  for ( i = 1; i < MAXNUM; i++)
    if (local_array[i] > max)
      max = local_array[i];
  printf("%d", max);
}