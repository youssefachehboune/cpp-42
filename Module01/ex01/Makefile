# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 14:56:20 by yachehbo          #+#    #+#              #
#    Updated: 2022/07/24 14:58:05 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./twd

SRCS	=	./main.cpp ./Zombie.cpp ./zombieHorde.cpp

HDRS	=	./Zombie.hpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

all :		$(NAME)

$(NAME) : $(OBJS) $(HDRS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	: 	fclean $(NAME)

.PHONY:	all clean fclean re