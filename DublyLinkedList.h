#ifndef HEADER_DUBLY_LINKED_LIST
#define HEADER_DUBLY_LINKED_LIST

typedef enum {
	LIST_OK,
	LIST_ERROR
}ListResault;

struct _node {
	int data;
	struct _node* next;
	struct _node* prev;
};

struct _linkedList {
	struct _node* head;
	int numberOfElements;
};

typedef struct _node node;
typedef struct _linkedList linkedList;

ListResault insertData(linkedList* list, int pos, int value);
ListResault deleteDataAtPosition(linkedList* list, int pos);
ListResault deleteDataAsValue(linkedList* list, int value);
ListResault sort(linkedList* list);
ListResault insertInSortOreder(linkedList* list, int value);
ListResault printList(linkedList* list);

#endif