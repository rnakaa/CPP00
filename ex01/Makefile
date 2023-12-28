CC=g++
CFLAGS=-c
TARGET=ex01

OBJ= phonebook.o main.o contact.o

$(TARGET):$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.cpp contact.hpp phonebook.hpp
	$(CC) $(CFLAGS) main.cpp

phonebook.o: phonebook.cpp phonebook.hpp
	$(CC) $(CFLAGS) phonebook.cpp
contact.o: contact.cpp contact.hpp
	$(CC) $(CFLAGS) contact.cpp


clean:
	rm -f $(TARGET) $(OBJ)
