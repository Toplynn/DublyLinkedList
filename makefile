CC=gcc
CXX=g++
LD=ld

all: DoublyLinkedList
	SRCS = ./main.c 

DoublyLinkedList:
	CC -o doublyLinkedList $(SRCS)