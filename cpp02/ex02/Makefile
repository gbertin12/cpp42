# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 13:40:54 by gbertin           #+#    #+#              #
#    Updated: 2022/12/16 14:32:09 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f
SRCS := $(shell find . -name '*.cpp' -type f)


OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)
		
fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(NAME)

re: fclean all
		
.PHONY: all clean fclean re