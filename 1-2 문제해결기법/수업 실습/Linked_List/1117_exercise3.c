#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int key;
    struct NODE *next;
};

int main() {
    struct NODE* node;

    node = (struct NODE*)malloc(sizeof(struct NODE));
    if (node != (struct NODE*)NULL) {
        (*node).key = 100;
        (*node).next = NULL;
        printf("%d\n", node->key);
        free(node); // hip이 잡은 주소 공간을 끊어줌
    }
    printf("%d\n", node->key); // 이미 끊은 공간인데 하려고 함

    return 0;
}