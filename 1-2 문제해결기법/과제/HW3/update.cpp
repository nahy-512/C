#include <stdio.h>
#define MAX 100

struct EMP {
    int RRN;
    char name[20];
    float salary;
    float bonus;
};

int check_prev(struct EMP *arr, struct EMP emp, int count) // 1. same in previous items, 0: not matched
{
    for (int i = 0; i < count ; i++) {
        if (arr[i].RRN == emp.RRN)
            return 1;
    }
    return 0;
};

int main() {
    // var
    struct EMP employee[MAX];
    int total_num = 0, register_num = 0;
    // init get employee information
    printf("Type the number of employees: ");
    scanf("%d", &total_num);

    for (int i = 0; i < total_num ; i++) {
        // get information
        struct EMP tmp;
        printf("\nType employee information(RRN, name, salary, bonus): ");
        scanf("%d %s %f %f", &tmp.RRN, &tmp.name, &tmp.salary, &tmp.bonus);

        // check constraint
        if (check_prev(employee, tmp, register_num)) { // 1. constraint: unique RRN
            printf("Error: the RRN is already registered!\n\n");
        }
        else if(tmp.bonus >= tmp.salary) { // 2. constraint: bonus < salary
            printf("Error: the bonus must be less than salary!\n\n");
        }
        else { // register the data to array
            printf("The employee has been registered!\n\n");
            employee[register_num] = tmp;
            register_num++;
        }
    }
    // printing the registered array items
    for (int i = 0; i < register_num; i++) {
        printf("%d-th employee: RRN=%d Name=%s Salary=%f Bonus=%f\n", i, employee[i].RRN, employee[i].name, employee[i].salary, employee[i].bonus);
    }
}