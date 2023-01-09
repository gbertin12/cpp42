# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 08:32:53 by gbertin           #+#    #+#              #
#    Updated: 2023/01/09 09:37:16 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter
CXXFLAGS = -Wall -Wextra -Werror -g -MMD -std=c++98
CXX = c++
RM = rm -f
SRCS =	main.cpp 
		
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