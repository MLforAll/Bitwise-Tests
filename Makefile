# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 18:30:11 by kdumarai          #+#    #+#              #
#    Updated: 2017/12/14 20:05:17 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bw_test

CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/bw_tests.c \
	srcs/bw_tests_utils.c \

OBJS = $(SRCS:srcs/%.c=objs/%.o)

all: objdir comp

objdir:
	if [ ! -d objs ]; then mkdir objs; fi

comp: $(OBJS) objs/bw_settings.o
	gcc -o $(NAME) $? -I includes

objs/%.o:%.c
	gcc $(CFLAGS) -c $< -I includes -o $@

objs/%.o: srcs/%.c
	gcc $(CFLAGS) -c $< -I includes -o $@

clean:
	rm -f $(OBJS) objs/bw_settings.o
	rm -rf objs

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
