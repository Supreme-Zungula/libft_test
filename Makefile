# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzungula <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/18 14:35:44 by yzungula          #+#    #+#              #
#    Updated: 2018/05/18 15:11:53 by yzungula         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBNAME = libft.a
NAME = libft
CC = gcc
FLAGS = -Wall -Wextra -Werror
SOURCES = ./sources/
INCLUDES  = ./includes/
CFILES = $(SOURCES)*.c
OBJECTS = *.o

all: index_lib 
	$(CC) -o $(NAME) $(LIBNAME)
make_o_files:
	$(CC) $(FLAGS) -c $(CFILES) -I$(INCLUDES)
make_lib: make_o_files
	ar rc $(LIBNAME) $(OBJECTS)
index_lib: make_lib
	ranlib $(LIBNAME)
clean: 
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(LIBNAME) $(NAME)
re: fclean all
