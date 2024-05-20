# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matteo <matteo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 18:25:41 by misidori          #+#    #+#              #
#    Updated: 2024/03/03 23:05:34 by matteo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	FragTrap

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp characters.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	ClapTrap.h ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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
