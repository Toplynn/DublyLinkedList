#include <stdio.h>
#include "DublyLinkedList.h"

void testInsertData() {
	linkedList list;
	linkedList list2;
	initList(&list);
	initList(&list2);

	printf("testInsertData()\n");

	insertData(&list, 0, 5);
	insertData(&list, 0, 4);
	insertData(&list, 0, 3);
	insertData(&list, 0, 2);
	insertData(&list, 0, 1);

	insertData(&list2, 0, 5);
	insertData(&list2, 10, 4);
	insertData(&list2, 2, 3);
	insertData(&list2, 10, 2);
	insertData(&list2, 4, 1);

	printf("list1 : ");
	printList(&list);

	printf("list2 : ");
	printList(&list2);

	insertData(&list2, 2, 55);
	insertData(&list2, 4, 88);
	insertData(&list2, 1, 99);
	printf("list2 : ");
	printList(&list2);
	printf("*****************************\n");
}

int main()
{
	testInsertData();
	return 0;
}