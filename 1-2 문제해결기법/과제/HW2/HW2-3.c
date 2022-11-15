#include <stdio.h>
#include <string.h>
#define NAME_LEN 64
#define NUM 2


struct Student {
    char Name[NAME_LEN];
    int height;
    float weight;
    int schols;
};

void func2(struct Student *stu) {
    if ((*stu).height < 180) (*stu).height = 180;
    if (stu->weight < 100) stu->weight = 100;
}

int main() {
    struct Student stu[NUM];

    // initialization
    for (int i = 0; i < NUM; i++) {
        printf("Type %d-th student's info (Name, height, weight, schols): ", i);
        scanf("%s %d %f %d", &stu[i].Name, &stu[i].height, &stu[i].weight, &stu[i].schols);
    }

    // Call by Reference
    for (int i = 0; i < NUM; i++) {
        func2(&stu[i]);
    }

    // print
    for (int i = 0; i < NUM; i++) {
        printf("Name\t=%10s\n", stu[i].Name);
        printf("Height\t=%10d\n", stu[i].height);
        printf("Weight\t=%10f\n", stu[i].weight);
        printf("Schols\t=%10d\n\n", stu[i].schols);
    }

}