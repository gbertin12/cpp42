# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 11:11:50 by gbertin           #+#    #+#              #
#    Updated: 2023/01/04 10:43:36 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals
CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98
CXX = c++
RM = rm -f
SRCS =	main.cpp \
		Dog.cpp \
		Cat.cpp \
		Animal.cpp \
		Wrong/WrongDog.cpp \
		Wrong/WrongCat.cpp \
		Wrong/WrongAnimal.cpp
		
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