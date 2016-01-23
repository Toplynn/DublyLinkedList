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

ListResault insertData(struct _linkedList* list, int pos, int value);
ListResault deleteDataAtPosition(struct _linkedList* list, int pos);
ListResault deleteDataAsValue(struct _linkedList* list, int value);
ListResault sort(struct _linkedList* list);
ListResault insertInSortOreder(struct _linkedList* list, int value);
ListResault printList(struct _linkedList* list);

#endif