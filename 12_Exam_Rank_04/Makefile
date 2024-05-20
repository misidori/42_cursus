NAME	=	microshell
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
HEADER	=	microshell.h
SRC		=	microshell.c

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@echo "microshell is now ready"
clean:
	@rm -f microshell.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
