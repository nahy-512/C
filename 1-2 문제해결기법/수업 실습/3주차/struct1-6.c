#include <stdio.h>
//선언하고 변수는 따로 초기화 -> 가장 일반적인 형태

struct Birth{
    int month;
    int day;
    int year;
};

int main() {
    struct Birth birth = { 1, 25, 2003 }; //만들면서 동시에 초기화
    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
}