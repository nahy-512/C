#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int key;
    struct NODE *next;
};

int main() {
    struct NODE *node0, *node1, *node2;

    node0 = (struct NODE*)malloc(sizeof(struct NODE));
    node1 = (struct NODE*)malloc(sizeof(struct NODE));
    node2 = (struct NODE*)malloc(sizeof(struct NODE));
    if (node0 == (struct NODE*)NULL || node1 == (struct NODE*)NULL || node2 == (struct NODE*)NULL) {
        printf("malloc failed");
        exit(1);
    }
    node0->key = 100; node1->key = 200; node2->key = 300;
    node0->next = node1; node1->next = node2; node2->next = NULL;

    printf("%d\n", node0->key);
    printf("%d %d\n", node1->key, node0->next->key);
    printf("%d %d %d\n", node2->key, node1->next->key, node0->next->next->key);
    
    free(node0); free(node1); free(node2);

    return 0;
}