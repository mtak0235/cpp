# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 16:36:14 by mtak              #+#    #+#              #
#    Updated: 2021/09/21 01:02:20 by mtak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp \
		Bureaucrat.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= g++#clang++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -pedantic

NAME			= a.out

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re