# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 23:52:44 by kchen2            #+#    #+#              #
#    Updated: 2020/01/13 23:52:48 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##clang++ compiler
##-Wall -Werror -Wextra compiler flags

NAME = megaphone

CC = clang++

FLAGS = -Wall -Werror -Wextra

FILES = megaphone

SRCS = $(addsuffix .cpp, $(FILES))

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all