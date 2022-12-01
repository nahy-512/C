#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NUM 5

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
}

int searchKey(struct NODE* head, int srchkey) {
	/* code here */
	struct NODE* cNode = head;
	while (cNode != NULL) {
		if (cNode->key == srchkey) {
			return 1;
		}
		cNode = cNode->next;
	}
	return 0;
}

void searchTest(struct NODE* head, int key) {
	int found = searchKey(head, key);
	if (found)
		printf("search key(%d) found\n\n", key);
	else
		printf("search key(%d) not found\n\n", key);
}

void addNode(struct NODE* head, struct NODE* node) {
	/* code here */
	struct NODE* cNode = head;
	struct NODE* pNode = NULL;
	while (cNode != NULL) {
		if (cNode->key > node->key) break;
		pNode = cNode;
		cNode = cNode->next;
	}
	node->next = cNode;
	pNode->next = node;
}

void deleteNode(struct NODE* head, int key) {
	/* code here */
	struct NODE* cNode = head;
	struct NODE* pNode = NULL;
	while (cNode != NULL) {
		if (cNode->key == key) break; // find delete node
		pNode = cNode;
		cNode = cNode->next;
	}
	pNode->next = cNode->next; // delete
}

void displayList(struct NODE* head) {
	/* code here */
	struct NODE* ptr = head;
	while (ptr != NULL) {
		printf("[%d] --> ", ptr->key);
		ptr = ptr->next;
	}
	printf("[NULL]\n\n");
}

int main() {
	int i = 0;
	struct NODE* head;
	struct NODE* tmp;

	// Initialize node
	head = createNewNode(0);
	for (i = 1; i < NUM; i++) {
		tmp = createNewNode(i);
		addNode(head, tmp);
	}
	displayList(head);

	// Add node
	tmp = createNewNode(50);
	addNode(head, tmp);
	tmp = createNewNode(30);
	addNode(head, tmp);
	displayList(head);

	// Search node
	searchTest(head, 5);
	searchTest(head, 4);
	searchTest(head, 30);

	// Delete node
	deleteNode(head, 3);
	deleteNode(head, 30);
	displayList(head);

	// Add node
	tmp = createNewNode(7);
	addNode(head, tmp);
	displayList(head);

	return 0;
}

