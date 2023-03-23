# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 02:00:30 by matteo            #+#    #+#              #
#    Updated: 2023/03/22 19:50:56 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili di compilazione
NAME	=	lib/libsolong.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

# Cartelle di lavoro
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
LIB_DIR = lib

# File sorgenti e oggetto
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(OBJ_DIR) $(NAME)
	make all -C ft_printf
	make all -C mlx
	$(CC) -o so_long -L./lib/ -lsolong -lftprintf -lmlx -framework OpenGL -framework AppKit

# Regola per creare la cartella degli oggetti
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Regola per la libreria
$(NAME): $(OBJ)
	@if [ ! -d $(LIB_DIR) ]; then mkdir -p $(LIB_DIR); fi
	ar rcs $(NAME) $(OBJ)

# Regole di compilazione degli oggetti
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -c -o $@ $< $(CFLAGS) -I$(INC_DIR)

clean:
	make clean -C ft_printf
	$(RM) $(OBJ_DIR)

fclean:
	make fclean -C ft_printf
	$(RM) $(NAME) so_long
	@if [ -d $(OBJ_DIR) ]; then $(RM) $(OBJ_DIR); fi

re: clean
	if [ -d $(OBJ_DIR) ]; then $(RM) $(OBJ_DIR); fi
	mkdir -p $(OBJ_DIR)
	$(MAKE) all

.PHONY:	all clean fclean re
