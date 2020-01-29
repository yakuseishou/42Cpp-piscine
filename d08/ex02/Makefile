# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/27 16:19:54 by kchen2            #+#    #+#              #
#    Updated: 2020/01/24 19:09:50 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Mutated

CC = clang++

# C98 = -std=c++98

FLAGS = -Wall -Werror -Wextra

FILES = main \
		mutantstack

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
	rm -f TREeSSSSS_shrubbery

re: fclean all