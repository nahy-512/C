// swap
#include <stdio.h>
#include <string.h>
#define NUM 3

struct XYZ {
    int width; int height; int depth; int volume;
};
void init (struct XYZ *xyz) { // array로 받겠다는 의미
    for (int i = 0; i < NUM; i++) {
        printf("Type %d-th into (width, height, depth): ", i);
        scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth); // 그냥 어레이처럼 쓰면 됨. 안에 멤머가 있을 뿐(.)
        xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth; // (*(xyz+i)).volume, (xyz)
    }
}
//swaping code here
void swap (struct XYZ* a, struct XYZ* b) {
    struct XYZ tmp = *a; *a = *b; *b = tmp;
}
void print(struct XYZ* xyz) {
    printf("\nPrinting the result\n");
    for (int i = 0; i < NUM; i++) {
        printf("\nwidth=%d height=%d depth=%d volume=%d", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
    }
}

int main() {
    struct XYZ xyz[NUM];
    init(xyz); // array 의 값을 pacing
    swap(&xyz[0], &xyz[1]);
    print(xyz);
}
// 다음번 할 거 : sorting. 아제 가공 ㄱㄴ
// width로 정렬 -> 프린트, height로 정렬 -> 프린트