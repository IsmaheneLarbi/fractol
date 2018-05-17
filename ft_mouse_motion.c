/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_motion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 18:53:01 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 18:44:35 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_mouse_motion(int x, int y, void *p)
{
	t_canvas	*c;
	t_pix		pos;
	t_pix		z;

	c = (t_canvas *)p;
	ft_set_pix(&pos, (double)x, (double)y);
	ft_set_pix(&z, 0., 0.);
	if (!p)
		return (0);
	else
	{
		if (x > 0 && x < WIDTH && y > 0 && y < HEIGHT)
		{
			if (c->f == julia)
			{
				if (!c->freeze)
				{
					ft_init_fractal(c, x, y);
					c->f(c);
					mlx_put_image_to_window(c->mlx_ptr, c->win, c->img, 0, 0);
				}
			}
		}
	}
	return (1);
}
