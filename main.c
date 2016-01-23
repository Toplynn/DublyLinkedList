#include <stdio.h>
#include "DublyLinkedList.h"

void test() {
	linkedList list;
	linkedList list2;
	initList(&list);
	initList(&list2);

	printf("testinsertAtPosition()\n");

	insertAtPosition(&list, 0, 5);
	insertAtPosition(&list, 0, 4);
	insertAtPosition(&list, 0, 3);
	insertAtPosition(&list, 0, 2);
	insertAtPosition(&list, 0, 1);

	insertAtPosition(&list2, 0, 5);
	insertAtPosition(&list2, 10, 4);
	insertAtPosition(&list2, 2, 3);
	insertAtPosition(&list2, 10, 2);
	insertAtPosition(&list2, 4, 1);

	printList(&list);
	printList(&list2);

	insertAtPosition(&list2, 2, 55);
	insertAtPosition(&list2, 4, 88);
	insertAtPosition(&list2, 1, 99);
	printList(&list2);

	deleteAtPosition(&list2, 5);
	printList(&list2);
	deleteAtPosition(&list2, 3);
	printList(&list2);
	deleteAtPosition(&list2, 1);
	printList(&list2);
	deleteAtPosition(&list2, 0);
	printList(&list2);
	//deleteAtPosition(&list2, 3);
	printList(&list2);
	//deleteAtPosition(&list2, 10);
	printList(&list2);
	printf("*****************************\n");
}

void menu() {
	linkedList myList;
	initList(&myList);
	int choice = 7;
	int position;
	int value;

	while(choice) {

		printf("menu:\n");
		printf("  0. Izlaz\n");
		printf("  1. insertAtPosition()\n");
		printf("  2. deleteAtPosition()\n");
		printf("  3. insertAtBegin()\n");
		printf("  4. insertAtEnd()\n");
		printf("  5. deleteFromBegin()\n");
		printf("  6. deleteFromEnd()\n");
		scanf("%d", &choice);

		switch(choice) {
			case 1:
				printf("Unesite poziciju:");
				scanf("%d", &position);
				printf("Unesite vrijednost:");
				scanf("%d", &value);
				insertAtPosition(&myList, position, value);
				break;
			case 2:
				printf("Unesite poziciju:");
				scanf("%d", &position);
				deleteAtPosition(&myList, position);
				break;
			case 3:
				printf("Unesite vrijednost:");
				scanf("%d", &value);
				insertAtBegin(&myList, value);
				break;
			case 4:
				printf("Unesite vrijednost:");
				scanf("%d", &value);
				insertAtEnd(&myList, value);
				break;
			case 5:
				printf("value = %d\n", deleteFromBegin(&myList));
				break;
			case 6:
				printf("value = %d\n", deleteFromEnd(&myList));
				break;
		}
	}
}

void printLinkedListTest() {
	linkedList myList;
	initList(&myList);
	int i;
	int j;
	for(i=0; i<10; i++) {
		for(j=0; j<i; j++) {
			insertAtEnd(&myList, j+1);
		}
		printf("\n");
		printLinkedList(&myList);
		clearList(&myList);
	}
	
}

int main()
{
	//test();
	//menu();
	printLinkedListTest();
	return 0;
}