#	Makefile

TARGET	=	ABC

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp Base.cpp A.cpp B.cpp C.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	Base.hpp A.hpp B.hpp C.hpp colors.h

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
