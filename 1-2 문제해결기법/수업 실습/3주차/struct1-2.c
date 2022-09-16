#include <stdio.h>

struct Birth{
    int month;
    int day;
    int year;
};

int main() {
    struct Birth birth;
    struct Birth birth_b; //변수 여러 개 사용 가능. 다양

    birth.month = 1;
    birth.day = 25;
    birth.year = 2003;

    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);


    birth_b.month = 1;
    birth_b.day = 25;
    birth_b.year = 2003;

    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
    return 0;
}