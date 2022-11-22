/* 메모리 잡고, 푸는 거*/
#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int key;
    struct NODE *next;
};

int main() {
    int* nums;
    nums = (int*)malloc(10 * sizeof(int));
    if (nums == (int*)NULL) {
        printf("malloc failed");
        exit(1);
    }
    free(nums);

    return 0;
}