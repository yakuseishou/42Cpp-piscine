# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/27 16:19:54 by kchen2            #+#    #+#              #
#    Updated: 2020/01/21 01:42:53 by kchen2           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = clang++

C98 = -std=c++98

FLAGS = -Wall -Werror -Wextra

FILES = main \
		Bureaucrat \
		Form

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

re: fclean all