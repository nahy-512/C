/* index로 max 출력*/
#include <stdio.h>

int main() {
   int i;
   int max_index = 0;
   int arr[100];

   for (i = 0; i < 100; i++)
   {
       printf("Please type an positive integer: ");
       scanf("%d", &arr[i]);

       /////////////////
       if (arr[i] == -1) break;
       else if (arr[i] > arr[max_index]) {
            max_index = i;
       }
       /////////////////
   }

   printf("max=%d\n", arr[max_index]);
   return 0;
}