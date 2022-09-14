#include <stdio.h>
//minmax 함수 call by reference

int main() {

    void minmax(int, int, int*, int*);  /* function prototype */
    int n1 = 0, n2 = 0;
    int min = 0, max = 0;
    printf("n1 n2: ");
    scanf("%d %d", &n1, &n2);
    printf("[before]\tn1: %d, n2: %d, min: %d, max: %d\n", n1, n2, min, max);

    minmax(n1, n2, &min, &max);     /* funtion call */
    printf("[after]\t\tn1: %d, n2: %d, min: %d, max: %d\n", n1, n2, min, max);
}

void minmax(int num1, int num2, int *min, int *max) {     /* function definition */
    //code here
    if (num1 <= num2) {
        *min = num1; //주소에 해당하는 값
        *max = num2;
    }
    else {
        *min = num2;
        *max = num1;
    }
}