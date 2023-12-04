# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 02:00:30 by misidori          #+#    #+#              #
#    Updated: 2023/03/24 19:26:10 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili di compilazione
NAME		=	lib/libsolong.a
EXECUTABLE	=	so_long
#MAKEFLAGS	+=	--silent
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

# Cartelle di lavoro
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
LIB_DIR = lib

# File sorgenti e oggetto
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(OBJ_DIR) $(NAME)
	@$(CC) -o $(EXECUTABLE) -L./lib/ -lsolong -lft -lmlx -framework OpenGL -framework AppKit
	@echo .
	@echo .
	@echo You can now play so_long
	@echo .
	@echo .
	@echo Please choose a .ber map

# Regola per creare la cartella degli oggetti
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Regola per la libreria
$(NAME): $(OBJ)
	@if [ ! -d $(LIB_DIR) ]; then mkdir -p $(LIB_DIR); fi
	@ar rcs $(NAME) $(OBJ)

# Regole di compilazione degli oggetti
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c -o $@ $< $(CFLAGS) -I$(INC_DIR)

clean:
	@$(RM) $(OBJ_DIR)
	@echo .
	@echo .
	@echo The object files have been removed

fclean: clean
	@$(RM) $(NAME) $(EXECUTABLE)
	@if [ -d $(OBJ_DIR) ]; then $(RM) $(OBJ_DIR); fi
	@echo .
	@echo .
	@echo The executable has been removed

re: fclean all

# Dichiarazione dei target che non sono file da creare
.PHONY:	all clean fclean re
