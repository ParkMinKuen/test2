#pragma comment(lib, "CloudAssignment")
#include<stdio.h>
#include"list.h"

int main() {

	linkedList *L = (linkedList *)malloc(sizeof(linkedList));
	L->cur = NULL;
	L->head = NULL;
	L->tail = NULL;


	createNode(L, 1);
	createNode(L, 2);
	createNode(L, 3);
	deleteNode(L);
	createNode(L, 4);
	createNode(L, 5);
	createNode(L, 6);
	deleteNode(L);
	deleteNode(L);
	createNode(L, 7);
	printNodes(L);

	return 0;
}



