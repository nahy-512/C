/* 파도반 수열 */
#include <stdio.h>
/*
1. 1
2. 1
3. 1
4. 2 -> P(1)+ P(3)
5. 2 -> P(4)
------------------
6. 3 -> P(1) + P(4)
7. 4 -> P(2) + P(6)
8. 5 -> P(3) + P(7)
*/
int main() {
    int T, num;
    unsigned long long result;
    //printf("테스트 케이스 입력 개수: ");
    scanf("%d", &T); // 테스트 케이스 입력 개수
    int count[T+1];
    unsigned long long N[101] = {0, 1, 1, 1, 2, 2};

    for (int i = 0; i < T; i++) { 
        //printf("%d-th test case: ", i);
        scanf("%d", &num); // 테스트 케이스 입력
        // int result = func(N[i]);
        if (num > 4) {
            for (int j = 5; j <= num; j++) {
                N[j] = N[j-5] + N[j-1];
            }
        }
        result = N[num];
        printf("%lld\n", result);
    }

    return 0;
}