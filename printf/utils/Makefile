# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/14 19:21:35 by ilarbi            #+#    #+#              #
#    Updated: 2017/09/03 12:45:44 by ilarbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC=../libft/libft.h
CFLAGS= -c -Wall -Wextra -Werror
LIB= ../libft/libft.a
DIR= ../libft
NAME= libutils.a
SRC= ft_fdel.c \
	 ft_percent.c \
	 ft_printwstr.c \
	 ft_wstrbytes.c \
	 ft_wcsize.c \
	 ft_check.c \
	 ft_chartostr.c \
	 ft_wstrtostr.c \
	 ft_isflag.c \
	 ft_iswidth.c \
	 ft_islen.c \
	 ft_istype.c \
	 ft_isunsigned.c \
	 ft_issigned.c \
	 ft_isnumeric.c \
	 ft_isok.c \
	 ft_assign_base.c \
	 ft_checkforflags.c \
	 ft_checkforwidth.c \
	 ft_checkforlen.c \
	 ft_gettype.c \
	 ft_printformat.c \
	 ft_redirect_p.c \
	 ft_cast_signed.c \
	 ft_cast_signed_.c \
	 ft_cast_signed_hh.c \
	 ft_cast_signed_h.c \
	 ft_cast_signed_l.c \
	 ft_cast_signed_ll.c \
	 ft_cast_signed_j.c \
	 ft_cast_signed_z.c \
	 ft_cast_unsigned.c \
	 ft_cast_unsigned_.c \
	 ft_cast_unsigned_hh.c \
	 ft_cast_unsigned_h.c \
	 ft_cast_unsigned_l.c \
	 ft_cast_unsigned_ll.c \
	 ft_cast_unsigned_j.c \
	 ft_cast_unsigned_z.c \
	 ft_wstr.c \
	 ft_prepend.c \
	 ft_invalid_type.c
OBJ=ft_fdel.o \
	ft_percent.o \
	ft_printwstr.o \
	ft_wstrbytes.o \
	ft_wcsize.o \
	ft_check.o \
	ft_chartostr.o \
	ft_wstrtostr.o \
	ft_isflag.o \
	ft_iswidth.o \
	ft_islen.o \
	ft_istype.o \
	ft_isunsigned.o \
	ft_issigned.o \
	ft_isnumeric.o \
	ft_isok.o \
	ft_assign_base.o \
	ft_checkforflags.o \
	ft_checkforwidth.o \
	ft_checkforlen.o \
	ft_gettype.o \
	ft_printformat.o \
	ft_redirect_p.o \
	ft_cast_signed.o \
	ft_cast_signed_.o \
	ft_cast_signed_hh.o \
	ft_cast_signed_h.o \
	ft_cast_signed_l.o \
	ft_cast_signed_ll.o \
	ft_cast_signed_j.o \
	ft_cast_signed_z.o \
	ft_cast_unsigned.o \
	ft_cast_unsigned_.o \
	ft_cast_unsigned_hh.o \
	ft_cast_unsigned_h.o \
	ft_cast_unsigned_l.o \
	ft_cast_unsigned_ll.o \
	ft_cast_unsigned_j.o \
	ft_cast_unsigned_z.o \
	ft_wstr.o \
	ft_prepend.o \
	ft_invalid_type.o
all: $(NAME)
$(NAME): $(OBJ) $(GBG)
	ar rc $(NAME) $^
$(OBJ): 
	gcc $(CFLAGS) $^ $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
