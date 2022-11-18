/* 배열 & 함수로 max 구하기 */

#include <stdio.h>
#define MAXNUM 1000

// int main() {
//     void findMax(int[MAXNUM]);
//     int numList[MAXNUM] = { 2, 5, 31, 14, 59, 4};
//     findMax(numList);
// }
// void findMax (int local_array[]) {
//     int i, max = local_array[0];

//     for (i = 0; i < MAXNUM; i++) {
//         if ( local_array[i] > max )
//             max = local_array[i];
//     }

//     printf("%d", max);
// }

/* return value */
int main() {
    int max;
    int findMax(int[MAXNUM]);
    int numList[MAXNUM] = { 2, 5, 31, 14, 59, 4};
    max = findMax(numList);

    printf("%d", max);
}
int findMax (int local_array[]) {
    int i, max = local_array[0];

    for (i = 0; i < MAXNUM; i++) {
        if ( local_array[i] > max )
            max = local_array[i];
    }

    return max;
}