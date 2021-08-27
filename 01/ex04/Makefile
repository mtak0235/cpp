# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/12 21:46:54 by mtak              #+#    #+#              #
#    Updated: 2021/08/18 11:25:17 by mtak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = clang++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -I. -std=c++98 -pedantic -std=c++98 -pedantic

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) *.replace

re:				fclean $(NAME)

.PHONY:			all clean fclean re