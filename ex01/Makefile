CC = c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

TARGET = PhoneBook

SRCS =  main.cpp \
	PhoneBook.cpp \
	Contact.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Contact.hpp \
	PhoneBook.hpp

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o : %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY:all
all:$(TARGET)

.PHONY: clean
clean:
	rm -f $(OBJS) 

.PHONY: fclean
fclean: clean
	rm -f $(TARGET) 

.PHONY:re
re:		fclean all
