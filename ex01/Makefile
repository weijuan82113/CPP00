# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 00:52:54 by wchen             #+#    #+#              #
#    Updated: 2023/07/17 23:07:11 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

# COMPILE FLAGS
CC		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++98
SRCS	= PhoneBook.cpp Contact.cpp main.cpp
OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) $(OBJS)  -o $@

clean 	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
