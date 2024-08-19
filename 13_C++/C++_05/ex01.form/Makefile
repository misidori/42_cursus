# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matteo <matteo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 21:19:01 by misidori          #+#    #+#              #
#    Updated: 2024/08/12 00:30:23 by matteo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	Bureaucrat

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	Bureaucrat.h Bureaucrat.hpp Form.h Form.hpp

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
