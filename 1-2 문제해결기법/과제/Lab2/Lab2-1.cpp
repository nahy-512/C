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
    
    fclose(myInFile);
    *num = count;
}

void print_data(int* arr, int num) {
    /* code here */
    for (int i = 0; i < num; i++) {
        printf("[%d] %d\n", i, arr[i]);
    }
}

int main() {

    int arr[10] = { 0 };
    int num = 0;

    // read data
    read_data(arr, &num, "sample_v1.txt");

    // print data
    print_data(arr, num);

    return 0;

}
