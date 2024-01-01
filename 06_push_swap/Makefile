# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matteo <matteo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 02:00:30 by misidori          #+#    #+#              #
#    Updated: 2024/01/01 19:24:00 by matteo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variabili di compilazione
LIBRARY				=	lib/libpushswap.a
EXECUTABLE			=	push_swap
EXECUTABLE_BONUS	=	checker
CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror
RM					=	rm -rf

# Cartelle di lavoro
SRC_DIR				=	src
OBJ_DIR				=	obj
INC_DIR				=	include
LIB_DIR				=	lib
CHK_SRC_DIR			=	bonus/src
CHK_OBJ_DIR			=	bonus/obj
CHK_INC_DIR			=	bonus/include

# Colori
YELLOW				=	\033[93m
ORANGE				=	\033[38;5;208m
GREEN				=	\033[32m
LIGHT_GREEN			=	\033[38;5;10;48;5;15m
RESET				=	\033[0m

# File sorgenti e oggetto
SRC		= $(wildcard $(SRC_DIR)/*.c)
SRC_CHK	= $(wildcard $(CHK_SRC_DIR)/*.c)
OBJ		= $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
CHK_OBJ	= $(patsubst $(CHK_SRC_DIR)/%.c,$(CHK_OBJ_DIR)/%.o,$(SRC_CHK))

all: libs $(OBJ_DIR) $(LIBRARY) $(EXECUTABLE)
	@echo .
	@echo .
	@echo "$(GREEN)push_swap is now ready$(RESET)"


bonus: $(CHK_OBJ_DIR) $(CHK_OBJ) $(EXECUTABLE_BONUS)
	@echo .
	@echo .
	@echo "$(GREEN)checker is now ready$(RESET)"

# Regola per creare la cartella degli oggetti
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Regola per creare la cartella degli oggetti bonus
$(CHK_OBJ_DIR):
	@mkdir -p $(CHK_OBJ_DIR)

# Regola per la libreria
$(LIBRARY): $(OBJ)
	@if [ ! -d $(LIB_DIR) ]; then mkdir -p $(LIB_DIR); fi
	@ar rcs $(LIBRARY) $(OBJ)

# Regole di compilazione degli oggetti push_swap
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c -o $@ $< $(CFLAGS) -I$(INC_DIR)

# Regole di compilazione degli oggetti checker
$(CHK_OBJ_DIR)/%.o: $(CHK_SRC_DIR)/%.c
	@$(CC) -c -o $@ $< $(CFLAGS) -I$(CHK_INC_DIR)

# Regola per il target push_swap
$(EXECUTABLE): $(OBJ)
	@$(CC) -o $(EXECUTABLE) $(OBJ) -L./lib/ -lpushswap -lft

# Regola per il target checker
$(EXECUTABLE_BONUS): $(CHK_OBJ)
	@$(CC) -o $(EXECUTABLE_BONUS) $(CHK_OBJ) -L./lib/ -lpushswap -lft

libs:
	@$(MAKE) -C libft/ft_printf
	@$(MAKE) -C libft/get_next_line
	@$(MAKE) -C libft

clean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(CHK_OBJ_DIR)
	@$(MAKE) -C libft/ft_printf clean
	@$(MAKE) -C libft/get_next_line clean
	@$(MAKE) -C libft clean
	@echo .
	@echo .
	@echo "$(YELLOW)The object files have been removed$(RESET)"

fclean: clean
	@$(RM) $(LIBRARY) $(EXECUTABLE) $(EXECUTABLE_BONUS)
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
