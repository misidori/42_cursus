# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matteo <matteo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 21:19:01 by misidori          #+#    #+#              #
#    Updated: 2024/08/18 13:55:24 by matteo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	=	Bureaucrat

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS	=	$(SRCS:.cpp=.o)
HEADERS	=	Bureaucrat.h Bureaucrat.hpp AForm.h AForm.hpp ShrubberyCreationForm.h \
			ShrubberyCreationForm.hpp RobotomyRequestForm.h RobotomyRequestForm.hpp \
			PresidentialPardonForm.h PresidentialPardonForm.hpp Intern.h Intern.hpp

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f *_shrubbery

fclean: clean
	rm -f $(TARGET)

re: fclean all
