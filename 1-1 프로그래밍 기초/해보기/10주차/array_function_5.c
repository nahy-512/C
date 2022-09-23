#include <stdio.h>
/* function prototype */
void printArray(int[], int);
void add2Array(int, int [], int[], int[]);

int main(){
  int arr1[5]={1,2,3,6,1};
  int arr2[5]={1,2,3,4,5};
  int arr3[5];
  printArray(arr3,5);
  puts("");

  /* function call */
  add2Array(5,arr1,arr2,arr3);
  puts("");

  return 0;

}

/* function definition */
void printArray(int input[], int len)
{
  for (int i = 0; i < len ; i++)
    printf("%d ", input[i]);
  printf("\n");
}

void add2Array(int len, int a[], int b[], int c[])
{
  for (int i = 0; i < len ; i++)
    c[i] = a[i] + b[i];
}