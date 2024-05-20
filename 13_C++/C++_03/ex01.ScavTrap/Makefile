# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matteo <matteo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 18:25:41 by misidori          #+#    #+#              #
#    Updated: 2024/03/03 13:40:19 by matteo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	ScavTrap

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	ClapTrap.h ClapTrap.hpp ScavTrap.hpp

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
