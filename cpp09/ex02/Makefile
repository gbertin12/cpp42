# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 08:32:53 by gbertin           #+#    #+#              #
#    Updated: 2023/04/10 12:39:09 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CXXFLAGS = -Wall -Wextra -Werror -g -MMD -std=c++98
CXX = c++
RM = rm -f
SRCS =	main.cpp \
		PmergeMe.cpp
		
DEPENDS := $(patsubst %.cpp,%.d,$(SRCS))

OBJ = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS)  -o $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ) $(DEPENDS)
		
fclean:	clean
		$(RM) $(NAME)
		

re: fclean all

-include $(DEPENDS)

.PHONY: all clean fclean re