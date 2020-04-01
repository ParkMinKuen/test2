#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct __list {
	struct __node *cur;
	struct __node *head;
	struct __node *tail;
} linkedList;

typedef struct __node {
	int data;
	struct __node *next;
} node;

void createNode(linkedList *L, int tdata);
void deleteNode(linkedList *L);
void printNodes(linkedList *L);
	
