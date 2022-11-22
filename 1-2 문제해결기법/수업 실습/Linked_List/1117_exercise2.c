#include <stdio.h>
#include <stdlib.h>

int main() {
    int* nums, i;
    nums = (int*)malloc(10 * sizeof(int));
    if (nums == (int*)NULL) {
        printf("malloc failed");
        exit(1);
    }

    for (i = 0; i < 5; i++) {
        printf("Type an integer: ");
        scanf("%d", &nums[i]);
        printf("result:%d\n", nums[i]);
        //printf("address: %d\n", &nums[i]);
    }
    free(nums);

    return 0;
}