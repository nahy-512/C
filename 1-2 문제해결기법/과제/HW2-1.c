#include <stdio.h>
#define NUM 5

struct NODE {
    int key;
    struct NODE* next;
};

int main() {
    struct NODE node[NUM];

    // initialization
    for (int i = 0; i < NUM; i++) {
        node[i].key = i;
        node[i].next =  NULL;
    }

    // printing before linking stage
    printf("Before linking\n");
    for (int i = 0; i < NUM; i++) {
        printf("i=%d key=%d next = %d Add=%d\n", i, node[i].key, node[i].next, &node[i]);
    }

    //// linking stage
    for (int i = 0; i < NUM; i++) {
        node[i].next = &node[i+1];
    }

    printf("\nAfter linking\n");
    for (int i = 0; i < NUM; i++) {
        printf("i=%d key=%d next = %d Add=%d\n", i, node[i].key, node[i].next, &node[i]);
    }

    return 0;
}