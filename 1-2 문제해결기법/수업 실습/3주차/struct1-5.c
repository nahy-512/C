#include <stdio.h>
//선언과 동시에 초기화

struct Birth{
    int month;
    int day;
    int year;
}birth = { 1, 25, 2003 };

int main() {

    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
}