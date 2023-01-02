# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 11:11:50 by gbertin           #+#    #+#              #
#    Updated: 2023/01/02 09:03:57 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MateriaSource
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRCS =	main.cpp \
		Character.cpp \
		MateriaSource.cpp \
		Materia/AMateria.cpp \
		Materia/Cure.cpp \
		Materia/Ice.cpp 

OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)
		
fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(NAME)

re: fclean all
		
.PHONY: all clean fclean re