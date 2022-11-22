/* createNewNode Function*/
#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int key;
    struct NODE *next;
};

struct NODE* createNewNode(int key) {
    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->key = key;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct NODE *node0 = NULL, *node1 = NULL, *node2 = NULL;

    node0 = createNewNode(100);
    node1 = createNewNode(200);
    node2 = createNewNode(457);

    // linking
    node0->next = node1;
    node1->next = node2;

    if (node0 == (struct NODE*)NULL || node1 == (struct NODE*)NULL || node2 == (struct NODE*)NULL) {
        printf("malloc failed");
        exit(1);
    }

    // node0->key = 100; node1->key = 200; node2->key = 300;
    // node0->next = node1; node1->next = node2; node2->next = NULL;

    printf("%d\n", node0->key);
    printf("%d %d\n", node1->key, node0->next->key);
    printf("%d %d %d\n", node2->key, node1->next->key, node0->next->next->key);
    
    free(node0); free(node1); free(node2);

    return 0;
}