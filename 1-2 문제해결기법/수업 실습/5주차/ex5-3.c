// 목요일 수업
// sorting
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
// sort by height
void sort_by_height(struct XYZ*a, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap(&a[j - 1], &a[j]);
        }
    }
}
// sort by width
void sort_by_width(struct XYZ*a, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].width > a[j].width)
                swap(&a[j - 1], &a[j]);
        }
    }
}
// sort by depth
void sort_by_depth(struct XYZ*a, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].depth > a[j].depth)
                swap(&a[j - 1], &a[j]);
        }
    }
}
// sort by volume
void sort_by_volume(struct XYZ*a, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].volume > a[j].volume)
                swap(&a[j - 1], &a[j]);
        }
    }
}
// print
void print(struct XYZ* xyz) {
    printf("\nPrinting the result\n");
    for (int i = 0; i < NUM; i++) {
        printf("\nwidth=%d height=%d depth=%d volume=%d", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
    }
}

int main() {
    struct XYZ xyz[NUM];
    init(xyz); // array 의 값을 pacing
    print(xyz);
    sort_by_height(&xyz[0], &xyz[1]); // height
    print(xyz);
    sort_by_width(&xyz[0], &xyz[1]); // width
    print(xyz);
    sort_by_depth(&xyz[0], &xyz[1]); // depth
    print(xyz);
    sort_by_volume(&xyz[0], &xyz[1]); // volume
    print(xyz);
}
// 다음번 할 거 : sorting. 아제 가공 ㄱㄴ
// width로 정렬 -> 프린트, height로 정렬 -> 프린트