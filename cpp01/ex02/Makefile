# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 22:23:52 by gbertin           #+#    #+#              #
#    Updated: 2022/10/31 11:41:40 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ref
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRCS =	main.cpp
		
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