# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/09 11:58:56 by ilarbi            #+#    #+#              #
#    Updated: 2017/10/13 17:22:15 by ilarbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-c -Wall -Wextra -Werror
NAME= ./libft.a
SRC=  ft_get_file_extension.c \
	  get_next_line.c \
	  ft_ishex.c \
	  ft_htoi.c \
	  ft_abs.c \
	  ft_putc.c \
	  ft_putwchar.c \
	  ft_wchart.c \
	  ft_putwstr.c \
	  ft_wstrlen.c \
	  ft_power.c \
	  ft_bin_to_dec.c \
	  ft_nbrsize.c \
	  ft_nbrssize.c \
	  ft_nbrusize.c \
	  ft_atoistr.c \
	 ft_strjoin_free.c \
	 ft_itoa.c \
	 ft_itoa_base.c \
	 ft_itoa_max_base.c \
	 ft_uitoa_max_base.c \
	 ft_lstmap.c \
	 ft_lstadd.c \
	 ft_lstdel.c \
	 ft_lstiter.c \
	 ft_lstdelone.c \
	 ft_lstnew.c \
	 ft_strsplit.c \
	 ft_strtrim.c \
	 ft_strjoin.c \
	 ft_strsub.c \
	 ft_strmapi.c \
	 ft_strmap.c \
	 ft_striteri.c \
	 ft_striter.c \
	 ft_putnbr_fd.c \
	 ft_putendl_fd.c \
	 ft_putstr_fd.c \
	 ft_putchar_fd.c \
	 ft_putendl.c \
	 ft_isdigit.c \
	 ft_isalpha.c \
	 ft_isalnum.c \
	 ft_tolower.c \
	 ft_toupper.c \
	 ft_strlen.c \
	 ft_strcmp.c \
	 ft_isprint.c \
	 ft_memset.c \
	 ft_memcpy.c\
	 ft_memccpy.c\
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memmove.c \
	 ft_memalloc.c \
	 ft_memdel.c \
	 ft_putnbr.c \
	 ft_putchar.c \
	 ft_putstr.c \
	 ft_atoi.c \
	 ft_isascii.c \
	 ft_strncmp.c \
	 ft_strdup.c \
	 ft_strcpy.c \
	 ft_strncpy.c \
	 ft_strcat.c \
	 ft_strncat.c \
	 ft_strlcat.c \
	 ft_strstr.c \
	 ft_strnstr.c\
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_bzero.c \
	 ft_strnew.c \
	 ft_strdel.c \
	 ft_strclr.c \
	 ft_strequ.c \
	 ft_strnequ.c \
	 ft_isspace.c \
	 ft_swap.c \
	 ft_strminimalize.c \
	 ft_wc.c
OBJ=  ft_get_file_extension.o \
	  get_next_line.o \
	 ft_ishex.o \
	 ft_htoi.o \
	 ft_abs.o \
	 ft_putc.o \
	 ft_wchart.o \
	 ft_putwchar.o \
	  ft_putwstr.o \
	  ft_wstrlen.o \
	 ft_power.o \
	 ft_bin_to_dec.o \
	 ft_nbrsize.o \
	 ft_nbrssize.o \
	 ft_nbrusize.o \
	 ft_atoistr.o \
	 ft_strjoin_free.o \
	 ft_itoa.o \
	 ft_itoa_base.o \
	 ft_itoa_max_base.o \
	 ft_uitoa_max_base.o \
	 ft_lstmap.o \
	 ft_lstadd.o \
	 ft_lstdel.o \
	 ft_lstiter.o \
	 ft_lstdelone.o \
	 ft_lstnew.o \
	 ft_strsplit.o \
	 ft_strtrim.o \
	 ft_strjoin.o \
	 ft_strsub.o \
	 ft_strmapi.o \
	 ft_strmap.o \
	 ft_striteri.o \
	 ft_striter.o \
	 ft_putnbr_fd.o \
	 ft_putendl_fd.o \
	 ft_putstr_fd.o \
	 ft_putchar_fd.o \
	 ft_putendl.o \
	 ft_isdigit.o \
	 ft_isalpha.o \
	 ft_isalnum.o \
	 ft_tolower.o \
	 ft_toupper.o \
	 ft_strlen.o \
	 ft_strcmp.o \
	 ft_isprint.o \
	 ft_memset.o \
	 ft_memcpy.o \
	 ft_memccpy.o \
	 ft_memchr.o \
	 ft_memcmp.o \
	 ft_memmove.o \
	 ft_memalloc.o \
	 ft_memdel.o \
	 ft_putnbr.o \
	 ft_putchar.o \
	 ft_putstr.o \
	 ft_atoi.o \
	 ft_isascii.o \
	 ft_strncmp.o \
	 ft_strdup.o \
	 ft_strcpy.o \
	 ft_strncpy.o \
	 ft_strcat.o \
	 ft_strncat.o \
	 ft_strlcat.o \
	 ft_strstr.o \
	 ft_strnstr.o \
	 ft_strchr.o \
	 ft_strrchr.o \
	 ft_bzero.o \
	 ft_strnew.o \
	 ft_strdel.o \
	 ft_strclr.o \
	 ft_strequ.o \
	 ft_strnequ.o \
	 ft_isspace.o \
	 ft_swap.o \
	 ft_strminimalize.o \
	 ft_wc.o
INCLUDES= libft.h

all: $(NAME)
$(NAME): $(OBJ) 
	ar rc $(NAME) $^
$(OBJ):
	gcc  $(CFLAGS) $^ $(SRC) 
clean:
	rm -f $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
