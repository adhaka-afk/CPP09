# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/06 07:54:40 by adhaka            #+#    #+#              #
#    Updated: 2024/07/08 03:22:37 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= PmergeMe
CC				= c++

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -std=c++98

HEADERS			=	PmergeMe.hpp

SRCS			=	PmergeMe.cpp \
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		${CC} ${CFLAGS} -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
