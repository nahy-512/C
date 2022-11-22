/* searching -> 방문, 몇개인지 count */
/* 연결된 노드의 개수 확인 */

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

struct NODE* buildOneTwoThree() {
    struct NODE* first = createNewNode(1);
    struct NODE* second = createNewNode(2);
    struct NODE* third = createNewNode(3);

    first->next = second; // note: pointer assignment rule
    second->next = third;
    third->next = NULL;

    // At this poing, the linked list referenced by "first"
    return first;
}
int Length(struct NODE* head) { // head: 처음 시작점
    struct NODE* ptr = head;
    int count = 0;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

// linked list에 어떤 값들이 있는지 확인
void displayList(struct NODE* head) {
    struct NODE* ptr = head;
    while (ptr != NULL) {
        printf("[%d] --> ", ptr->key);
        ptr = ptr->next;
    }
     printf("[NULL]\n");
}

void lengthTest() {
    struct NODE* myList = buildOneTwoThree();
    int len = Length(myList); // results in len == 3
    printf("length of the list = %d\n", len);
    displayList(myList);
}

int main() {
    lengthTest(); // our next exercise

    return 0;
}

// if exist 1(key), else 0
int find(struct NODE* head, int key) {
    int result = 0;
    struct NODE* ptr = head;

    while (ptr != NULL) {
        // Search
        if (ptr->key == key) {return 1;} // 찾으면 바로 return
        /* {
            result = 1;
            break
        }*/
        ptr = ptr->next;
    }
    return result;
}
