# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/27 16:19:54 by kchen2            #+#    #+#              #
#    Updated: 2020/01/22 23:21:54 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ex02

CC = clang++

C98 = -std=c++98

FLAGS = -Wall -Werror -Wextra

FILES = main \
		base

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME):
	$(CC) $(C98) $(FLAGS) -c $(SRCS) 
	$(CC) $(C98) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f TREeSSSSS_shrubbery

re: fclean all