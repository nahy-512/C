
//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 3
//#include <stdio.h>
//struct NODE{
//	int key;
//	NODE* next;
//};
//
//void init(struct NODE* node, int size) {
//	node[0].key = 100;
//	node[1].key = 250;
//	node[2].key = 467;
//	node[0].next = node[1].next = node[2].next = NULL;
//}
//
//void link(struct NODE* node, int size) {
//	node[0].next = &node[1];
//	node[1].next = &node[2];
//}
//
//void main() {
//	struct NODE node[NUM];
//	init(node, NUM);
//	link(node, NUM);
//
//	//printf("key=%d\n", node[0].key);
//	//printf("key=%d\n", node[1].key); 
//	//printf("key=%d\n", node[2].key);
//
//	//printf("key=%d\n", node[1].key); //250
//	//printf("key=%d\n", (*(node[0].next)).key); //node[1].key
//	//printf("key=%d\n", node[0].next->key);
//
//
//	//printf("key=%d\n", node[2].key);
//	//printf("key=%d\n", (*(node[1].next)).key); //node[2].key
//	//printf("key=%d\n", node[1].next->key);
//	//printf("key=%d\n", node[0].next->next->key); //node[2].key
//
//	//printf("key=%d\n", node[0].key);
//	//printf("key=%d\n", node[0].next->key);
//	//printf("key=%d\n", node[0].next->next->key);
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 5
//#include <stdio.h>
//struct NODE {
//	int key;
//	NODE* next;
//};
//
//void init(struct NODE* node, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("Type the %d-th key:",i);
//		scanf("%d", &node[i].key);
//		if (i != (size - 1))
//			node[i].next = &node[i + 1];
//		else
//			node[i].next = NULL;
//	}
//}
//void main() {
//	struct NODE node[NUM];
//	init(node, NUM);
//
//	printf("key=%d\n", node[0].key);
//	printf("key=%d\n", node[0].next->key);
//	printf("key=%d\n", node[0].next->next->key);
//	printf("key=%d\n", node[0].next->next->next->key);
//	printf("key=%d\n", node[0].next->next->next->next->key);
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//void init(struct XYZ *xyz) {
//	printf("Type info (width, height, depth):");
////	scanf("%d %d %d", &(*xyz).width, &(*xyz).height, &(*xyz).depth);
//	scanf("%d %d %d", &xyz->width, &xyz->height, &xyz->depth);
//	xyz->volume = xyz->width * xyz->height * xyz->depth;
//}
//void print(struct XYZ *xyz) {
//	printf("\nPrinting the result\n");
//	printf("width=%d height=%d depth=%d volume=%d\n", xyz->width, xyz->height, xyz->depth, xyz->volume);
//}
//int main() {
//	struct XYZ a, b;
//	init(&a);
//	init(&b);
//	print(&a);
//	print(&b);
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ *xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//
//void print(struct XYZ *xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	print(xyz);
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define NUM 3
//struct XYZ {
//	int width;int height;int depth;int volume;
//};
//void init(struct XYZ* xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//// swaping code here
//void swap(struct XYZ* a, struct XYZ* b) {
//	struct XYZ tmp = *a; *a = *b; *b = tmp;
//}
//void print(struct XYZ* xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	swap(&xyz[0], &xyz[1]);
//	print(xyz);
//}

