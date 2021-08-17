# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 14:59:46 by mtak              #+#    #+#              #
#    Updated: 2021/08/17 21:10:08 by mtak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen

SRCS = main.cpp\
		Karen.cpp

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