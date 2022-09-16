#include <stdio.h>

struct {
    int month;
    int day;
    int year;
}birth;

int main() {
    birth.month = 1;
    birth.day = 25;
    birth.year = 2003;

    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
}