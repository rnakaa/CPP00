CC = c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

TARGET = PhoneBook

SRCS =  main.cpp \
	phonebook.cpp \
	contact.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Contact.hpp \
	Phonebook.hpp

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o : %.cpp 

OBJ= phonebook.o main.o contact.o


clean:
	rm -f $(TARGET) $(OBJ)
