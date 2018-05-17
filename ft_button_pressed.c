/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button_pressed.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 22:41:26 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 18:47:18 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_button_pressed(int button, int x, int y, void *p)
{
	t_canvas	*c;

	c = (t_canvas *)p;
	if (!c)
		return (0);
	if (D_I * 0.2 < 500 && (button == 2 || button == 4))
	{
		c->i_min = c->i_min + D_I * 0.2 * (double)y / HEIGHT;
		c->i_max = c->i_max - D_I * 0.2 * (1 - ((double)y / HEIGHT));
		c->r_min = c->r_min + D_R * 0.2 * (double)x / WIDTH;
		c->r_max = c->r_max - D_R * 0.2 * (1 - ((double)x / WIDTH));
	}
	if (button == 1 || button == 5)
	{
		c->i_min = c->i_min - D_I * 0.2 * (double)y / HEIGHT;
		c->i_max = c->i_max + D_I * 0.2 * (1 - ((double)y / HEIGHT));
		c->r_min = c->r_min - D_R * 0.2 * (double)x / WIDTH;
		c->r_max = c->r_max + D_R * 0.2 * (1 - ((double)x / WIDTH));
	}
	c->f(c);
	mlx_put_image_to_window(c->mlx_ptr, c->win, c->img, 0, 0);
	return (1);
}
