#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void read_data(int* arr, int* num, const char* name) {
    /* code here */
    FILE* myInFile;
    myInFile = fopen(name, "r");
    int count = 0;

    if (myInFile == NULL) {
        printf("Could not find %s", name);
    }
    else {
        while (fscanf(myInFile, "%d", &arr[count]) != EOF) {
            count++;
        }
    }
    *num = count;
    fclose(myInFile);
}

void update_data(int* arr, int num, int weight) {
    /* code here */
    for (int i = 0; i < num; i++) {
        arr[i] *= weight;
    }
}

void write_data(int* src, int num, const char* name) {
    /* code here */
    FILE* myOutFile;
    myOutFile = fopen(name, "w");
    for (int i = 0; i < num; i++) {
        fprintf(myOutFile, "%d ", src[i]);
    }
    fclose(myOutFile);
}

int main() {

    int arr[10] = { 0 };
    int num = 0;

    // read data
    read_data(arr, &num, "sample_v1.txt");

    // update data
    update_data(arr, num, 3);

    // write updated data
    write_data(arr, num, "sample_v2.txt");

    return 0;
}
