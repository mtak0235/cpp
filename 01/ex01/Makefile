# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/10 20:40:51 by mtak              #+#    #+#              #
#    Updated: 2021/08/17 22:28:53 by mtak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = main.cpp\
		Zombie.cpp\
		ZombieHorde.cpp\

OBJS = $(SRCS:.cpp=.o)

CPP = clang++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -I. -std=c++98 -pedantic

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re