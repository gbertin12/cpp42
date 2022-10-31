# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 22:23:52 by gbertin           #+#    #+#              #
#    Updated: 2022/10/29 09:54:15 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapons
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp 
		
OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)
		
fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(NAME)
		
.PHONY: all clean fclean re%                   