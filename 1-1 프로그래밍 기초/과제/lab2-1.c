#include <stdio.h>
int main()
{
    int time;
    int hours=0, minutes=0, seconds=0;
    printf("Enter total time passed in seconds: ");
    scanf_s("%d", &time);
    hours = time / 360;
    minutes = (time % 360) / 60;
    seconds = time % 60;
    printf("%d seconds is equivalent to: ", time);
    printf(" %d:%d:%d [hours:minutes: seconds]", hours, minutes, seconds);
}