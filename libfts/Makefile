# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2017/02/20 18:05:23 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = nasm

CFLAGS = -f macho64

OBJ_DIR_NAME = obj

INCLUDES = ./includes

SRC_NAME = ft_bzero.s ft_strcat.s ft_isalpha.s ft_isdigit.s ft_isalnum.s \
		   ft_isascii.s ft_isprint.s ft_tolower.s ft_toupper.s ft_puts.s \
		   ft_strlen.s ft_memset.s ft_memcpy.s ft_strdup.s ft_cat.s \
		   ft_strnew.s ft_strcpy.s ft_strcmp.s ft_putnbr.s ft_strchr.s

SRC_PATH = ./srcs

OBJ =	$(SRC_NAME:%.s=$(OBJ_DIR_NAME)/%.o)

NAME = libfts.a

all : $(OBJ_DIR_NAME) $(NAME)

$(OBJ_DIR_NAME) :
	mkdir $(OBJ_DIR_NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_DIR_NAME)/%.o : $(SRC_PATH)/%.s
	$(CC) $(CFLAGS) $< -o $@ 

clean :
	rm -rf $(OBJ_DIR_NAME)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
