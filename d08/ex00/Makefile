# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/27 16:19:54 by kchen2            #+#    #+#              #
#    Updated: 2020/01/24 18:14:58 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CC = clang++

# C98 = -std=c++98
C11 = -std=c++11

FLAGS = -Wall -Werror -Wextra

FILES = main

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME):
	@$(CC) $(C11) $(FLAGS) -c $(SRCS) 
	@$(CC) $(C11) $(OBJS) -o $(NAME)
	@echo "making Executable"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f TREeSSSSS_shrubbery

re: fclean all