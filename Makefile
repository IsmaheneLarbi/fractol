# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 18:41:48 by ilarbi            #+#    #+#              #
#    Updated: 2017/11/01 19:12:24 by ilarbi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fractol 
INC=fractol.h 
LIB=printf/libftprintf.a
MLX= minilibx_macos/libmlx.a
CFLAGS=-Wall -Wextra -Werror
SRC=ft_init.c \
	ft_init_fractal.c \
	ft_set_pix.c \
	ft_reset.c \
	ft_get_color.c \
	ft_put_pix.c \
	ft_key.c \
	ft_button_pressed.c \
	ft_mouse_motion.c \
	mandelbrot.c \
	julia.c \
	burning_ship.c \
	ft_delete.c \
	ft_error.c \
	main.c 
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C minilibx_macos
	$(MAKE) -C printf
	gcc $(CFLAGS) -L ./printf -lftprintf -L ./minilibx_macos -lmlx -framework OpenGL -framework AppKit $(OBJ) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -I $(INC) -o $@ -c $<

clean:
	$(RM) -f $(OBJ)
	$(MAKE) -C printf clean

fclean: clean
	$(RM) -f $(MLX) $(NAME)
	$(MAKE) -C printf fclean

re: fclean all
