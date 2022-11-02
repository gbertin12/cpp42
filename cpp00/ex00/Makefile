# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 13:40:54 by gbertin           #+#    #+#              #
#    Updated: 2022/10/31 11:40:45 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = megaphone.cpp
RM = rm -f
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