// struct array
#include <stdio.h>
#define NUM 2

struct EMPLOYEES {
    int ID;
    char last_name[20];
    float pay_rate;
    float hours_worked;
};

void store( struct EMPLOYEES *emp) {
    for (int i = 0; i < NUM; i++) {
        printf("Type the information of employees (ID, Name, Payrate, Hours): ");
        scanf("%d %s %f %f", &emp[i].ID, &emp[i].last_name, &emp[i].pay_rate, &emp[i].hours_worked);
    }
}

void print( struct EMPLOYEES *emp) {
    float total = 0.0;
    for (int i = 0; i < NUM; i++) {
        printf("%d %s %f\n", emp[i].ID, emp[i].last_name, (emp[i].pay_rate * emp[i].hours_worked));
        total += (emp[i].pay_rate * emp[i].hours_worked);
    }
    printf("Total gross pay of all employee: %f\n", total);
}

int main() {
    // init
    struct EMPLOYEES emp[NUM];

    // input value store
    store(emp);

    // print
    print(emp);
}