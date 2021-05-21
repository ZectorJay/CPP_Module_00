# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 15:52:53 by hmickey           #+#    #+#              #
#    Updated: 2021/05/21 16:38:10 by hmickey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook

SRCS		=	phonebook.cpp PhoneBook.methods.cpp PhoneBook.methods2.cpp

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++

RM			= rm -f

CPPFLAGS		= -Wall -Wextra -Werror -g

.PHONY:			all clean fclean re

$(NAME):		${OBJS} ${INCLUDE}
				${CC} ${OBJS} -o $(NAME)

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all