# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchen <wchen@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 00:52:54 by wchen             #+#    #+#              #
#    Updated: 2023/07/15 11:46:16 by wchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

# COMPILE FLAGS
CC		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++98
SRCS	= ./megaphone.cpp
OBJS	= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $@

clean 	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
