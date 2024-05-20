# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 20:44:47 by matteo            #+#    #+#              #
#    Updated: 2024/02/23 14:49:26 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	phonebook

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp utils.cpp commands.cpp Phonebook.cpp Contact.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	Phonebook.hpp Contact.hpp header.h

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
