# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 11:11:50 by gbertin           #+#    #+#              #
#    Updated: 2022/11/04 10:05:34 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRCS =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		Wrong/WrongDog.cpp \
		Wrong/WrongCat.cpp \
		Wrong/WrongAnimal.cpp

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