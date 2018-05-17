/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:42:11 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 18:38:30 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_init(t_canvas *c, char *ens_name)
{
	c->space = 1;
	c->freeze = 0;
	c->ens_name = ens_name;
	ft_init_fractal(c, -3, -3);
	if ((!(c->mlx_ptr = mlx_init()))
		|| (!(c->win =
				mlx_new_window(c->mlx_ptr, WIDTH, HEIGHT, c->ens_name)))
		|| (!(c->img = mlx_new_image(c->mlx_ptr, WIDTH, HEIGHT)))
		|| (!(c->img_color_vector =
			(unsigned int *)mlx_get_data_addr(c->img, &c->a, &c->b, &c->c))))
	{
		ft_delete(c);
		ft_putstr("failed to initialize\n");
		exit(1);
	}
	c->margin_x = (HEIGHT - (c->space * (c->height - 1))) / 2;
	c->margin_y = (WIDTH - (c->space * (c->width - 1))) / 2;
	ft_bzero(c->img_color_vector, sizeof(unsigned int) * HEIGHT * WIDTH);
	return (1);
}
