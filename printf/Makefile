# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/22 18:35:41 by ilarbi            #+#    #+#              #
#    Updated: 2017/10/13 20:27:26 by ilarbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS= -c -Wall -Wextra -Werror
INC=utils/utils.h  
SRC= ft_parse.c \
	 ft_convert.c \
	 ft_padandprint.c \
	 ft_printf.c
OBJ= ft_parse.o \
	 ft_convert.o \
	 ft_padandprint.o \
	 ft_printf.o
GARBAGE= $(addprefix libft/, ft_get_file_extension.o get_next_line.o ft_ishex.o ft_htoi.o ft_abs.o ft_wc.o ft_strminimalize.o ft_putwchar.o ft_wchart.o ft_putwstr.o ft_wstrlen.o ft_power.o ft_bin_to_dec.o ft_atoistr.o   \
		 ft_strjoin_free.o   \
		 ft_itoa.o   \
		 ft_nbrsize.o \
		 ft_nbrssize.o \
		 ft_nbrusize.o \
		 ft_itoa_base.o   \
		 ft_itoa_max_base.o \
		 ft_uitoa_max_base.o \
		 ft_lstmap.o   \
		 ft_lstadd.o   \
		 ft_lstdel.o   \
		 ft_lstiter.o   \
		 ft_lstdelone.o   \
		 ft_lstnew.o   \
		 ft_strsplit.o   \
		 ft_strtrim.o   \
		 ft_strjoin.o   \
		 ft_strsub.o   \
		 ft_strmapi.o   \
		 ft_strmap.o   \
		 ft_striteri.o   \
		 ft_striter.o   \
		 ft_putnbr_fd.o   \
		 ft_putendl_fd.o   \
		 ft_putstr_fd.o   \
		 ft_putchar_fd.o   \
		 ft_putendl.o   \
		 ft_isdigit.o   \
		 ft_isalpha.o   \
		 ft_isalnum.o   \
		 ft_tolower.o   \
		 ft_toupper.o   \
		 ft_strlen.o   \
		 ft_strcmp.o   \
		 ft_isprint.o   \
		 ft_memset.o   \
		 ft_memcpy.o   \
		 ft_memccpy.o   \
		 ft_memchr.o   \
		 ft_memcmp.o   \
		 ft_memmove.o   \
		 ft_memalloc.o   \
		 ft_memdel.o   \
		 ft_putnbr.o   \
		 ft_putchar.o   \
		 ft_putstr.o   \
		 ft_atoi.o   \
		 ft_isascii.o   \
		 ft_strncmp.o   \
		 ft_strdup.o   \
		 ft_strcpy.o   \
		 ft_strncpy.o   \
		 ft_strcat.o   \
		 ft_strncat.o   \
		 ft_strlcat.o   \
		 ft_strstr.o   \
		 ft_strnstr.o   \
		 ft_strchr.o   \
		 ft_strrchr.o   \
		 ft_bzero.o   \
		 ft_strnew.o   \
		 ft_strdel.o   \
		 ft_strclr.o   \
		 ft_strequ.o   \
		 ft_strnequ.o   \
		 ft_isspace.o   \
		 ft_swap.o \
		 ft_putc.o)\
		 $(addprefix utils/, ft_isflag.o  ft_iswidth.o  ft_islen.o  ft_istype.o  ft_isok.o ft_isunsigned.o ft_checkforflags.o  ft_checkforwidth.o  ft_checkforlen.o ft_check.o ft_printformat.o ft_assign_base.o ft_gettype.o ft_redirect_p.o ft_cast_signed.o ft_cast_signed_.o ft_cast_signed_hh.o ft_cast_signed_h.o ft_cast_signed_l.o ft_cast_signed_ll.o ft_cast_signed_j.o ft_cast_signed_z.o ft_cast_unsigned.o ft_issigned.o ft_isnumeric.o ft_cast_unsigned.o ft_cast_unsigned_.o ft_cast_unsigned_hh.o ft_cast_unsigned_h.o ft_cast_unsigned_l.o ft_cast_unsigned_ll.o ft_cast_unsigned_j.o ft_cast_unsigned_z.o ft_chartostr.o ft_wstrtostr.o ft_wstr.o ft_prepend.o ft_wcsize.o ft_printwstr.o ft_wstrbytes.o ft_percent.o ft_fdel.o ft_invalid_type.o)
SUBDIR=libft utils
.PHONY: $(SUBDIR) all
NAME= libftprintf.a
LIB= libft/libft.a utils/libutils.a

all: $(NAME) 
$(NAME): $(OBJ) $(GARBAGE)
	ar rc $(NAME) $^	
$(OBJ): | $(SUBDIR) $(INC)
	gcc $(CFLAGS) -I $(INC) $(SRC)
$(SUBDIR): 
	$(MAKE) -C $@
utils: libft
clean: 
	rm -f $(OBJ) $(GARBAGE)
fclean: clean
	rm -rf $(LIB) $(NAME)
re: fclean all
