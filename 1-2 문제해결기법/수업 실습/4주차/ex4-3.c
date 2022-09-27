#include <stdio.h>
#define NUM 2
// HW 2-2, 2-3을 위한 베이스 코드
/*
Make a student structure which contains the following memvers (Name, height, weight, schols)
The program changes the members in the following cases ( If a height is less than 180, the height is set to 180, If a weight is less than 100, the weight is set to 100)
Complete the example program and run it to produce the following result using call by value/call by reference
*/ 

struct Student {
    char Name;
    int height;
    float weight;
    int schols;
};

int main() {
    struct Student student[NUM];

    // initialization
    for (int i = 0; i < NUM; i++) {
        printf("Type %d-th student's info (Name, height, weight, schols): ", i);
        scanf("%s %d %f %d", &student[i].Name, &student[i].height, &student[i].weight, &student[i].schols);
    }

    // print
    for (int i = 0; i < NUM; i++) {
        if (student[i].height < 180) {
            student[i].height = 180;
        }
        if (student[i].weight < 100) {
            student[i].weight = 100;
        }
        printf("Name\t=%10c\n", student[i].Name);
        printf("Height\t=%10d\n", student[i].height);
        printf("Weight\t=%10f\n", student[i].weight);
        printf("Schols\t=%10d\n\n", student[i].schols);
    }

}