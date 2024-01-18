CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all

all: $(TARGET)

.PHONY: clean fclean re all
