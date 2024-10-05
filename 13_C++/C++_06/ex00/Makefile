#	Makefile

TARGET	=	ScalarConverter

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp ScalarConverter.cpp utils.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	ScalarConverter.h ScalarConverter.hpp utils.hpp

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
