#include <stdio.h>

struct {
    int month;
    int day;
    int year;
}birth;

int main() {
    printf("Type current day (Day Month Year): ");
    scanf("%d %d %d", &birth.month, &birth.day, &birth.year);

    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
}