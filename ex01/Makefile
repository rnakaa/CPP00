CXX = c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

TARGET = PhoneBook

SRCS =  main.cpp \
	phonebook.cpp \
	contact.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = contact.hpp \
	phonebook.hpp

$(TARGET) : $(OBJS)
	$(CXX) $(CFLAGS) -o $@ $(OBJS)

%.o : %.cpp $(HEADERS)
	$(CXX) $(CFLAGS) -c $< -o $@

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
