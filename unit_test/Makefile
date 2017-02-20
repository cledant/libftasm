# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2017/02/20 11:11:02 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

OBJ_DIR_NAME = obj

LIBS = -lfts

INCLUDES = ./includes

INCLUDES_LIBFTS = ../libfts/includes

LIBFTS_PATH = ../libfts

SRCS_NAME = main.c test_bzero.c test_strcat.c

SRCS_PATH = ./srcs

OBJ_SRCS = $(SRCS_NAME:%.c=$(OBJ_DIR_NAME)/%.o)

NAME = main_test

all : libfts $(OBJ_DIR_NAME) $(NAME)

libfts :
	make -C $(LIBFTS_PATH)

$(OBJ_DIR_NAME) :
	mkdir $(OBJ_DIR_NAME)

$(NAME) : $(OBJ_SRCS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS) -L$(LIBFTS_PATH)

$(OBJ_DIR_NAME)/%.o : $(SRCS_PATH)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INCLUDES) -I$(INCLUDES_LIBFTS)

clean :
	rm -rf $(OBJ_DIR_NAME)
	make -C $(LIBFTS_PATH) clean

fclean : clean
	rm -rf $(NAME)
	make -C $(LIBFTS_PATH) fclean

re : fclean all

.PHONY : all clean fclean re libfts
