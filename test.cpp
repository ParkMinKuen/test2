#pragma comment(lib, "CloudAssignment")
#include<stdio.h>
#include"list.h"

int main() {

	linkedList *L = (linkedList *)malloc(sizeof(linkedList));
	L->cur = NULL;
	L->head = NULL;
	L
	deleteNode(L);
	deleteNode(L);
	createNode(L, 7);
	printNodes(L);

	return 0;
}



