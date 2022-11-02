# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 13:40:54 by gbertin           #+#    #+#              #
#    Updated: 2022/10/31 11:41:02 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneManager
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRCS =	main.cpp \
		class/Contact.class.cpp \
		class/PhoneBook.class.cpp 

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