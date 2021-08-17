# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 20:31:07 by mtak              #+#    #+#              #
#    Updated: 2021/08/17 22:24:52 by mtak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJS			= $(SRCS:.cpp=.o)

CPP				= g++
RM				= rm -f
CPPFLAGS		= -Wall -Wextra -Werror -I. -std=c++98 -pedantic

NAME			= phonebook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re