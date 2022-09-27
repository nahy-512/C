#include <stdio.h>
#define NUM 2

struct MonthDays {
    char name[10];
    int days;
};

// 함수
void store( struct MonthDays *convert ) { /* code here */
    for (int i = 0; i <= NUM; i++) {
        printf("Type the information of Month Days (Name, days): ");
        scanf("%s %d", &convert[i].name, &convert[i].days);
    }
}

int main() {
    // init
    struct MonthDays convert[NUM+1];

    // store
    store ( convert );

    //print
    for (int i = 1; i <= NUM; i++) {
        printf("%s days = %d\n", convert[i].name, convert[i].days);
    }
    

    return 0;
}