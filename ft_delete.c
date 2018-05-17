/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:51:13 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/31 20:36:22 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_delete(t_canvas *c)
{
	if (!c || !(c->mlx_ptr))
		return (0);
	((c->img_color_vector) ? free(c->img_color_vector) : 0);
	c->img_color_vector = NULL;
	c->img = NULL;
	((c->win) ? mlx_destroy_window(c->mlx_ptr, c->win) : 0);
	c->win = NULL;
	return (1);
}
