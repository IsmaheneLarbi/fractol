/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 14:27:47 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 19:22:06 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include <math.h>
# include "minilibx_macos/mlx.h"
# include "printf/ft_printf.h"
# define WIDTH 1000
# define HEIGHT 1000
# define IT_MAX 100
# define D_R (c->r_max - c->r_min)
# define D_I (c->i_max - c->i_min)

typedef	struct s_canvas	t_canvas;
typedef struct s_pix	t_pix;

struct					s_pix
{
	long double			r;
	long double			i;
	unsigned int		color;
};

struct					s_canvas
{
	char				*ens_name;
	int					height;
	int					width;
	int					a;
	int					b;
	int					c;
	t_pix				z_0;
	t_pix				z;
	t_pix				cte;
	int					freeze;
	double				r_min;
	double				r_max;
	double				i_min;
	double				i_max;
	int					margin_x;
	int					margin_y;
	int					space;
	void				*mlx_ptr;
	void				*win;
	void				*img;
	unsigned int		*img_color_vector;
	void				(*f)(t_canvas *c);
};

int						ft_init(t_canvas *c, char *ens_name);
unsigned int			ft_get_color(int iter);
int						ft_put_pix(t_canvas c, t_pix p, unsigned int color);
void					ft_init_fractal(t_canvas *c, double r, double i);
void					ft_set_pix(t_pix *p, double r, double i);
void					mandelbrot(t_canvas *c);
void					julia(t_canvas *c);
void					burning_ship(t_canvas *c);
void					ft_reset(t_canvas *c);
int						ft_mouse_motion(int x, int y, void *p);
int						ft_button_pressed(int button, int x, int y, void *p);
int						ft_key(int keycode, void *param);
int						ft_delete(t_canvas *c);
int						ft_error(t_canvas *c, char *msg);

#endif
