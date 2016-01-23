#ifndef HEADER_DUBLY_LINKED_LIST
#define HEADER_DUBLY_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	LIST_OK,
	LIST_ERROR
}ListResault;

typedef int dateType;
typedef int sizeType;

struct _node {
	dateType data;
	struct _node* next;
	struct _node* prev;
};
typedef struct _node node;

struct _linkedList {
	node* head;
	node* tail;
	sizeType numberOfElements;
};
typedef struct _linkedList linkedList;

void initList(linkedList* list);
ListResault insertData(linkedList* list, sizeType pos, dateType value);
ListResault deleteDataAtPosition(linkedList* list, sizeType pos);
ListResault deleteDataAsValue(linkedList* list, dateType value);
ListResault sort(linkedList* list);
ListResault insertInSortOreder(linkedList* list, dateType value);
ListResault printList(linkedList* list);

#endif