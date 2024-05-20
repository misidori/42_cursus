# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 20:44:47 by matteo            #+#    #+#              #
#    Updated: 2024/02/22 15:31:14 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	megaphone

SRC		=	megaphone.cpp
OBJ		=	megaphone.o
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

all: $(TARGET)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
