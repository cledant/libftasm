# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2017/02/20 19:58:31 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

OBJ_DIR_NAME = obj

LIBS = -lfts

INCLUDES = ./includes

INCLUDES_LIBFTS = ../libfts/includes

LIBFTS_PATH = ../libfts

SRCS_NAME = main.c test_bzero.c test_strcat.c test_isalpha.c test_isdigit.c \
			test_isalnum.c test_isascii.c test_isprint.c test_toupper.c \
			test_tolower.c test_puts.c test_strlen.c test_memset.c \
			test_memcpy.c test_strdup.c test_putnbr.c test_strcmp.c \
			test_strchr.c test_strnew.c test_strcpy.c

SRCS_CAT =  test_cat_file.c test_cat_stdin.c

SRCS_PATH = ./srcs

OBJ_SRCS_CAT = $(SRCS_CAT:%.c=$(OBJ_DIR_NAME)/%.o)

OBJ_SRCS = $(SRCS_NAME:%.c=$(OBJ_DIR_NAME)/%.o)

NAME = main_test

NAME_CAT_FILE = cat_file

NAME_CAT_STDIN = cat_stdin

all : libfts $(OBJ_DIR_NAME) $(NAME) $(NAME_CAT_FILE) $(NAME_CAT_STDIN)

libfts :
	make -C $(LIBFTS_PATH)

$(OBJ_DIR_NAME) :
	mkdir $(OBJ_DIR_NAME)

$(NAME) : $(OBJ_SRCS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS) -L$(LIBFTS_PATH)

$(NAME_CAT_FILE) : $(OBJ_SRCS_CAT)
	$(CC) -o $@ $(OBJ_DIR_NAME)/test_cat_file.o $(CFLAGS) $(LIBS) -L$(LIBFTS_PATH)

$(NAME_CAT_STDIN) : $(OBJ_SRCS_CAT)
	$(CC) -o $@ $(OBJ_DIR_NAME)/test_cat_stdin.o $(CFLAGS) $(LIBS) -L$(LIBFTS_PATH)

$(OBJ_DIR_NAME)/%.o : $(SRCS_PATH)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INCLUDES) -I$(INCLUDES_LIBFTS)

clean :
	rm -rf $(OBJ_DIR_NAME)
	make -C $(LIBFTS_PATH) clean

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME_CAT_FILE)
	rm -rf $(NAME_CAT_STDIN)
	make -C $(LIBFTS_PATH) fclean

re : fclean all

.PHONY : all clean fclean re libfts
