# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/27 16:19:54 by kchen2            #+#    #+#              #
#    Updated: 2020/01/08 19:16:57 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = clang++

FLAGS = -Wall -Werror -Wextra

FILES = main \
		Fixed.class

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) 
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all