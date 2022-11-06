# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 09:20:52 by zmrabet           #+#    #+#              #
#    Updated: 2022/11/06 18:52:33 by zmrabet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = ft_print_char.c ft_print_str.c ft_print_hexa.c ft_print_nbr.c \
	ft_print_nbr_uns.c ft_printf_utils.c ft_printf.c ft_print_pointer.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re