# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 16:36:43 by yachehbo          #+#    #+#              #
#    Updated: 2022/07/23 20:45:53 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./Zombie

SRCS	=	./main.cpp ./Zombie.cpp newZombie.cpp randomChump.cpp

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