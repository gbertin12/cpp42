# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 13:40:54 by gbertin           #+#    #+#              #
#    Updated: 2022/12/20 15:15:20 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98
CXX = c++
RM = rm -f
SRCS := $(shell find . -name '*.cpp' -type f)
DEPENDS := $(patsubst %.cpp,%.d,$(SRCS))

OBJ = $(SRCS:.cpp=.o) 

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS)  -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)
		$(RM) $(OBJ) $(DEPENDS)
		
fclean:	clean
		$(RM) $(OBJ)
		$(RM) $(NAME)
		$(RM) $(OBJ) $(DEPENDS)

re: fclean all

-include $(DEPENDS)
		
.PHONY: all clean fclean re