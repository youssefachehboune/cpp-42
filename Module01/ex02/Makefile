# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 15:47:29 by yachehbo          #+#    #+#              #
#    Updated: 2022/07/24 15:48:57 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./Brain

SRCS	=	./main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

all :		$(NAME)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	: 	fclean $(NAME)

.PHONY:	all clean fclean re