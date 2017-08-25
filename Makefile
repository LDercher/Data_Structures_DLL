STUDENT_ID=l446d901
LAB_NAME=doubly-linked-list-lab-1
GCC=g++
CFLAGS=-Wall -g -pedantic --std=c++11

FILES=Makefile main.cpp list.hpp list.cpp util.cpp util.hpp node.hpp node.cpp data.txt

ARCHIVE_FOLDER=$(STUDENT_ID)-$(LAB_NAME)

build: list util main node
	$(GCC) $(CFLAGS) -o main list.o util.o main.o node.o

test:
	./main

util:
	$(GCC) $(CFLAGS) -c util.cpp -o util.o

list: node
	$(GCC) $(CFLAGS) -c list.cpp -o list.o

node:
		$(GCC) $(CFLAGS) -c node.cpp -o node.o

main: list
	$(GCC) $(CFLAGS) -c main.cpp -o main.o

clean:
	rm -rf main *.o rm $(ARCHIVE_FOLDER) $(ARCHIVE_FOLDER).tar.gz

tar:
	make clean
	mkdir $(ARCHIVE_FOLDER)
	cp -r $(FILES) $(ARCHIVE_FOLDER)
	tar cvzf $(ARCHIVE_FOLDER).tar.gz $(ARCHIVE_FOLDER)
	rm -rf $(ARCHIVE_FOLDER)
