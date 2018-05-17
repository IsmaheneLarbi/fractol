/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_fractal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 13:30:02 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 19:22:42 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_init_julia(t_canvas *c, double r, double i)
{
	c->ens_name = "Julia";
	c->f = julia;
	c->cte.r = ((r != -3) ? (r * 0.004 - 2) : 0.285);
	c->cte.i = ((i != -3) ? (i * 0.004 - 2) : 0.013);
	c->r_min = -2;
	c->i_min = -2;
	c->r_max = 2;
	c->i_max = 2;
}

void	ft_init_mandelbrot(t_canvas *c, double r, double i)
{
	r = 0;
	i = r;
	c->ens_name = "Mandelbrot";
	c->f = mandelbrot;
	c->z_0.r = r;
	c->z_0.i = i;
	c->z = c->z_0;
	c->r_min = -2;
	c->i_min = -2;
	c->r_max = 2;
	c->i_max = 2;
}

void	ft_init_burning(t_canvas *c, double r, double i)
{
	c->ens_name = "Burning ship";
	c->f = burning_ship;
	c->z_0.r = r;
	c->z_0.i = i;
	c->z = c->z_0;
	c->r_min = -2;
	c->i_min = -2;
	c->r_max = 2;
	c->i_max = 2;
}

void	ft_init_fractal(t_canvas *c, double r, double i)
{
	if (ft_atoi(c->ens_name) == 1 || !(ft_strcmp(c->ens_name, "Mandelbrot")))
		ft_init_mandelbrot(c, r, i);
	if (ft_atoi(c->ens_name) == 2 || !(ft_strcmp(c->ens_name, "Julia")))
		ft_init_julia(c, r, i);
	if (ft_atoi(c->ens_name) == 3 || !(ft_strcmp(c->ens_name, "Burning ship")))
		ft_init_burning(c, r, i);
}
