/* Exhaustive search */
#define NUM 3
#include <stdio.h>
#include <string.h>

struct DATA {
    int index; char name[20]; int age; char hobby[20]; int key;
}d_array[NUM];

void init(struct DATA* data, int size) {
    for (int i = 0; i < size; i++) {
        printf("type %d-th info (index, name, age, hobby): ", i);
        scanf("%d %s %d %s", &data[i].index, &data[i].name, &data[i].age, &data[i].hobby);
    }
}
struct DATA find(struct DATA* data, int size, char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(data[i].name, name) == 0) // 0 means same to each other
            return data[i]; // index를 넘겨줘도 됨
    }
    struct DATA tmp = { -1, "No_name", "Nothing", -1}; // 찾는 값이 없을 때 return이 없어서 에러가 뜸. 더미를 집어넣어서 예외처리
    return tmp;
}

int main() {
    init(d_array, NUM);
    char name[20] = { 0 };
    printf("\nType searching name: ");
    scanf("%s", &name);
    struct DATA result = find(d_array, NUM, name);
    printf("Info searched result: name=%s index=%d age=%d hobby=%s\n", result.name, result.index, result.age, result.hobby);

    return 0;
}