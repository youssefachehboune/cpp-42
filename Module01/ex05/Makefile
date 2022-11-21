# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 14:12:17 by yachehbo          #+#    #+#              #
#    Updated: 2022/07/26 14:14:03 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./Harl

SRCS	=	./main.cpp ./Harl.cpp

HDRS	=	./Harl.hpp

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