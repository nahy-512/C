
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE {
	int key;
	struct NODE* next;
};

struct NODE* createNewNode(int key) {
	/* code here */
	struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
	newNode->key = key;
	newNode->next = NULL;
	return newNode;
};

struct NODE* buildOneTwoThree() {
	struct NODE* first = createNewNode(1);
	struct NODE* second = createNewNode(2);
	struct NODE* third = createNewNode(3);

	// linking
	first->next = second;	// note: pointer assignment rule
	second->next = third;
	third->next = NULL;

	// At this point, the linked list referenced by "first"
	return first;
}

int Length(struct NODE* head) {
	/* code here */
	struct NODE* ptr = head;
	int count = 0;
	while (ptr != NULL) {
		count++;
		ptr = ptr->next;
	}
	return count;
}

void displayList(struct NODE* head) {
	/* code here */
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