# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:13:01 by yachehbo          #+#    #+#              #
#    Updated: 2022/07/20 17:16:35 by yachehbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./PhoneBook

SRCS	=	./main.cpp ./PhoneBook.cpp

HDRS	=	./PhoneBook.hpp ./Contact.hpp

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