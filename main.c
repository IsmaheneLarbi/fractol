/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:30:21 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 19:23:31 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			main(int argc, char **argv)
{
	t_canvas	c;

	if (argc != 2)
		ft_error(&c, "Usage : ./fractol ensemble_number\n");
	if (ft_atoi(argv[1]) != 1 && ft_atoi(argv[1]) != 2
		&& ft_atoi(argv[1]) != 3)
		ft_error(&c,
			"invalid entry * 1: Mandelbrot\n* 2: Julia\n* 3: Burning ship\n");
	ft_init(&c, argv[1]);
	c.f(&c);
	system("afplay ~/Downloads/Ryksopp.mp3 &");
	mlx_put_image_to_window(c.mlx_ptr, c.win, c.img, 0, 0);
	mlx_hook(c.win, 6, 0, ft_mouse_motion, (void *)&c);
	mlx_hook(c.win, 2, 0, ft_key, (void *)&c);
	mlx_hook(c.win, 4, 0, ft_button_pressed, (void *)&c);
	mlx_loop(c.mlx_ptr);
	return (0);
}
