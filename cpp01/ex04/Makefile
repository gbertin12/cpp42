# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 11:11:50 by gbertin           #+#    #+#              #
#    Updated: 2022/10/30 14:13:16 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRCS =	main.cpp \
		StreamReplace.cpp \
		searchAndReplace.cpp

OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)
		
fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(NAME)
		
.PHONY: all clean fclean re