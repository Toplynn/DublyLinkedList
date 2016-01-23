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

int main()
{
	linkedList lista;
	initList(&lista);
	int choice = 7;
	int position;
	int value;

	while(choice) {

		printf("menu:\n");
		printf("  0. Izlaz\n");
		printf("  1. Dodaj element u listu\n");
		printf("  2. Brisi element iz liste\n");
		printf("  3. Dodaj elemnt na pocetak liste\n");
		printf("  4. Dodaj elemnt na kraj liste\n");
		printf("  5. Brisi elemnt sa pocetka liste\n");
		printf("  6. Brisi elemnt sa kraja liste\n");
		scanf("%d", &choice);

		switch(choice) {
			case 1:
				printf("Unesite poziciju:");
				scanf("%d", &position);
				printf("Unesite vrijednost:");
				scanf("%d", &value);
				insertAtPosition(&lista, position, value);
				break;
			case 2:
				printf("Unesite poziciju:");
				scanf("%d", &position);
				deleteAtPosition(&lista, position);
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}

		printList(&lista);
	}

	//test();
	return 0;
}