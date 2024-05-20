# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matteo <matteo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 19:58:36 by matteo            #+#    #+#              #
#    Updated: 2024/05/20 11:27:57 by matteo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	replace

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp replace_word.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	header.h

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@if [ -f text.replace ]; then rm text.replace && echo "rm -f text.replace"; fi

fclean: clean
	rm -f $(TARGET)

re: fclean all
