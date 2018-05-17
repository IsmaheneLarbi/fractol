/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 15:03:48 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/31 20:31:46 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#define ABS(X) ((X < 0) ? -X : X)

void	burning_ship(t_canvas *c)
{
	int		i;
	t_pix	index;

	index.i = 0;
	while (index.i < HEIGHT)
	{
		index.r = 0;
		while (index.r < WIDTH && !(i = 0))
		{
			c->cte.r = (index.r / (WIDTH / D_R)) + c->r_min;
			c->cte.i = (index.i / (HEIGHT / D_I)) + c->i_min;
			ft_reset(c);
			while (i < IT_MAX && (c->z.r * c->z.r + c->z.i * c->z.i) < 4.)
			{
				c->z.r = c->z_0.r * c->z_0.r - c->z_0.i * c->z_0.i + c->cte.r;
				c->z.i = 2 * ABS((double)c->z_0.r * c->z_0.i) + c->cte.i;
				c->z_0 = c->z;
				i++;
			}
			((i == IT_MAX) ? ft_put_pix(*c, index, 0)
			: ft_put_pix(*c, index, ft_get_color(i)));
			index.r += 1;
		}
		index.i += 1;
	}
}
