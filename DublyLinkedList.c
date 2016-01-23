#include "DublyLinkedList.h"

static void insertBefore(node* aNode, dateType value) {
	node* pNode;
	pNode = malloc(sizeof(node));
	pNode->data = value;
	pNode->next = aNode;
	pNode->prev = aNode->prev;

	aNode->prev = pNode;
	if(pNode->prev != NULL) {
		pNode->prev->next = pNode;
	}
}

static void insertAfter(node* aNode, dateType value) {
	node* pNode;
	pNode = malloc(sizeof(node));
	pNode->data = value;
	pNode->next = aNode->next;
	pNode->prev = aNode;

	aNode->next = pNode;
	if(pNode->next != NULL) {
		pNode->next->prev = pNode;
	}
}

void initList(linkedList* list) {
	list->numberOfElements = 0;
	list->head = NULL;
	list->tail = NULL;
}

ListResault insertData(linkedList* list, sizeType pos, dateType value)
{
	sizeType i = 0;
	node* pNode;

	if(list == NULL) {
		return LIST_ERROR;
	}

	if(list->numberOfElements == 0) {
		pNode = malloc(sizeof(node));
		pNode->data = value;
		pNode->next = NULL;
		pNode->prev = NULL;
		list->head = pNode;
		list->tail = pNode;
	} else if(pos == 0) {
		insertBefore(list->head, value);
		list->head = list->head->prev;
	} else if(pos >= list->numberOfElements) {
		insertAfter(list->tail, value);
		list->tail = list->tail->next;
	} else {
		pNode = list->head;
		while(pos--) {
			pNode = pNode->next;
		}
		insertBefore(pNode, value);
	}

	list->numberOfElements++;
	return LIST_OK;
}

ListResault deleteDataAtPosition(linkedList* list, sizeType pos)
{
	//TODO
	return LIST_ERROR;
}

ListResault deleteDataAsValue(linkedList* list, dateType value)
{
	//TODO
	return LIST_ERROR;
}

ListResault sort(linkedList* list)
{
	//TODO
	return LIST_ERROR;
}

ListResault insertInSortOreder(linkedList* list, dateType value)
{
	//TODO
	return LIST_ERROR;
}

ListResault printList(linkedList* list)
{
	node* pNode;
	pNode = list->head;
	printf("\nNULL");
	while(pNode != NULL) {
		printf("<- %d -> ",pNode->data);
		pNode = pNode->next;
	}
	printf("NULL\n");
	return LIST_OK;
}