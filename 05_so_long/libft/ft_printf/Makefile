# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 14:44:00 by misidori          #+#    #+#              #
#    Updated: 2023/03/23 23:30:36 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili di compilazione
NAME	=	./lib/libftprintf.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf

# Cartelle di lavoro
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
LIB_DIR = lib

# Definizione delle sorgenti e degli oggetti
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(OBJ_DIR) $(NAME)

# Regola per creare la cartella degli oggetti
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Regola per creare l'archivio statico con gli oggetti compilati
$(NAME): $(OBJ)
	@if [ ! -d $(LIB_DIR) ]; then mkdir -p $(LIB_DIR); fi
	@ar rcs $(NAME) $(OBJ)
	@echo .
	@echo .
	@echo libft_printf.a has been created

# Regole di compilazione degli oggetti
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c -o $@ $< $(CFLAGS) -I$(INC_DIR)

# Target per rimuovere gli oggetti
clean:
	@$(RM) $(OBJ_DIR)
	@echo .
	@echo .
	@echo The object files have been removed

# Target per rimuovere gli oggetti e l'archivio statico
fclean: clean
	@$(RM) $(NAME)
	@if [ -d $(LIB_DIR) ]; then $(RM) $(LIB_DIR); fi
	@$(RM) $(NAME)
	@echo .
	@echo .
	@echo The executable has been removed

# Target per ricompilare tutto il progetto
re: fclean all

# Dichiarazione dei target che non sono file da creare
.PHONY:	all clean fclean re
