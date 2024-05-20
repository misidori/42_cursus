# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 17:00:33 by misidori          #+#    #+#              #
#    Updated: 2024/02/23 19:31:24 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	war

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	HumanA.hpp HumanB.hpp Weapon.hpp header.h 

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
