# LD_LIBRARY_PATH=/usr/local/lib
# export LD_LIBRARY_PATH

CC=gcc
CXX=g++
LD=ld

INCS = -I./
LIBS_PATH = -L./
LIBS = -lDublyLinkedList

all: DublyLinkedList

SRCS = ./main.c 
#SRCS += ./DublyLinkedList.c 

DublyLinkedList:
	#$(CC) -o dublyLinkedListStatic $(SRCS)
	$(CC) -c -fpic DublyLinkedList.c
	$(CC) -shared -o libDublyLinkedList.so DublyLinkedList.o
	$(CC) $(LIBS_PATH) $(INCS) -o dublyLinkedListDynamic ./main.c $(LIBS)
clean:
	rm -f dublyLinkedListDynamic
	#rm -f dublyLinkedListStatic
	rm -f DublyLinkedList.o
	rm -f libDublyLinkedList.so
