/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:25:42 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/31 20:35:51 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_is_valid(int index)
{
	return ((index >= 0 && index < WIDTH * HEIGHT) ? 1 : 0);
}

int		ft_put_pix(t_canvas c, t_pix p, unsigned int color)
{
	int	index;

	if (p.i < 0 || p.r < 0 || (p.i * WIDTH + p.r >= (p.i + 1) * WIDTH))
		return (0);
	index = p.i * WIDTH + p.r;
	if (ft_is_valid(index) && color <= 16777215)
		c.img_color_vector[index] = color;
	else
		return (0);
	return (1);
}
