/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 16:04:21 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 19:09:00 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_key(int keycode, void *param)
{
	t_canvas	*c;

	c = (t_canvas *)param;
	if (!c)
		return (0);
	if (keycode == 53)
	{
		system("killall afplay");
		ft_error(c, "");
	}
	if (keycode == 83 || keycode == 84 || keycode == 85)
	{
		if (keycode == 83)
			c->ens_name = "1";
		else
			c->ens_name = ((keycode == 84) ? "2" : "3");
		ft_init_fractal(c, -3, -3);
		c->f(c);
		mlx_put_image_to_window(c->mlx_ptr, c->win, c->img, 0, 0);
	}
	else if (keycode == 3)
		c->freeze = ((c->freeze == 1) ? 0 : 1);
	return (1);
}
