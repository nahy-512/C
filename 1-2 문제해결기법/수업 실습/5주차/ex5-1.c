#include <stdio.h>
#define NUM 3

struct XYZ {
    int width;
    int height;
    int depth;
    int volume;
};

void init (struct XYZ *xyz) { // 그냥 포인트 변수. 구조체라고 해서 특별히 달라질 게 없음. int* a
    printf("Type info (width, height, depth): ");
    // &(*xyz).width
    scanf("%d %d %d", &xyz->width, &xyz->height, &xyz->depth); //주소에 해당되는 곳의 값. 가봤더니 구조체(멤버 있음) : $(*xyz).width 주소에 가서 멤버에 접근하는 표현법
    xyz->volume = xyz->width * xyz->height * xyz->depth;
}
void print (struct XYZ *xyz) {
    printf("width=%d height=%d depth=%d volume=%d\n", xyz->width, xyz->height, xyz->depth, xyz->volume);
}

int main() {
    struct XYZ a,b; // 변수 두 개 만듦
    init(&a); // init에서는 call by reference. 값을 바꿔야 함
    init(&b);
    print(&a);
    print(&b);    
}