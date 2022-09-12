#include <stdio.h>
//array 잘라서 출력하는 함수

/* function prototype */
void printArray(int [], int);
void addArray(int [], int, int);

int main(){
  int arr1[3]={1,2,3};
  int arr2[5]={1,2,3,4,5};

  /* function call */
  printArray(arr1, 3);
  addArray(arr1, 3, 3);
  printArray(arr1, 3);

  return 0;
}

/* function definition */
void printArray(int input[], int len)
{
  for (int i = 0; i < len ; i++)
    printf("%d ", input[i]);
  printf("\n");
}

void addArray(int input[], int len, int value)
{
  for (int i = 0; i < len ; i++)
    input[i] += value;
}