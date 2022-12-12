#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_VALUE 150
#define MIN_VALUE 0


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

void calc_data(int* arr, int num, int* min, int* max, float* average) {
    /* code here */
    *min = arr[0]; *max = arr[0]; // initializing min, max
    int sum = 0;

    for (int i = 0; i < num; i++) {
        if (arr[i] < *min) { // updating min
            *min = arr[i];
        }
        if (arr[i] > *max) { // updating max
            *max = arr[i];
        }
    }

    for (int i = 0; i < num; i++) { // update sum
        if (arr[i] == *min || arr[i] == *max) continue;
        else sum += arr[i];
    }
    
    *average = float(sum) / 8;
}

int main() {

    int arr[10] = { 0 };
    int num = 0;
    int min, max;
    float average;

    // read data
    read_data(arr, &num, "sample_v1.txt");

    // update data
    update_data(arr, num, 3);

    // write updated data
    write_data(arr, num, "sample_v2.txt");

    // read data
    read_data(arr, &num, "sample_v2.txt");

    // caculate the average without min, max value
    calc_data(arr, num, &min, &max, &average);

    // print the average, min, max values
    printf("The average=%f (min=%d max=%d excluded)\n", average, min, max);

    return 0;
}
