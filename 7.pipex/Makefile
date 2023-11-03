# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misidori <misidori@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 02:00:30 by misidori          #+#    #+#              #
#    Updated: 2023/06/07 19:14:58 by misidori         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili di compilazione
LIBRARY				=	lib/libpipex.a
EXECUTABLE			=	pipex
CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror
RM					=	rm -rf

# Cartelle di lavoro
SRC_DIR				=	src
OBJ_DIR				=	obj
INC_DIR				=	include
LIB_DIR				=	lib

# Colori
YELLOW				=	\033[93m
ORANGE				=	\033[38;5;208m
GREEN				=	\033[32m
LIGHT_GREEN			=	\033[38;5;10;48;5;15m
RESET				=	\033[0m

# File sorgenti e oggetto
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: libs $(OBJ_DIR) $(LIBRARY) $(EXECUTABLE)
	@echo .
	@echo .
	@echo "$(GREEN)pipex is now ready$(RESET)"

# Regola per creare la cartella degli oggetti
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Regola per la libreria
$(LIBRARY): $(OBJ)
	@if [ ! -d $(LIB_DIR) ]; then mkdir -p $(LIB_DIR); fi
	@ar rcs $(LIBRARY) $(OBJ)

# Regole di compilazione degli oggetti di pipex
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c -o $@ $< $(CFLAGS) -I$(INC_DIR)

# Regola per il target pipex
$(EXECUTABLE): $(OBJ)
	@$(CC) -o $(EXECUTABLE) $(OBJ) -L./lib/ -lpipex -lft

libs:
	@$(MAKE) -C libft/ft_printf
	@$(MAKE) -C libft/get_next_line
	@$(MAKE) -C libft

clean:
	@$(RM) $(OBJ_DIR)
	@$(MAKE) -C libft/ft_printf clean
	@$(MAKE) -C libft/get_next_line clean
	@$(MAKE) -C libft clean
	@echo .
	@echo .
	@echo "$(YELLOW)The object files have been removed$(RESET)"

fclean: clean
	@$(RM) $(LIBRARY) $(EXECUTABLE)
	@if [ -d $(LIB_DIR) ]; then $(RM) $(LIB_DIR); fi
	@$(MAKE) -C libft/ft_printf fclean
	@$(MAKE) -C libft/get_next_line fclean
	@$(MAKE) -C libft fclean
	@echo .
	@echo .
	@echo "$(ORANGE)The executables have been removed$(RESET)"

re: fclean all

# Dichiarazione dei target che non sono file da creare
.PHONY: all bonus clean fclean re libs
