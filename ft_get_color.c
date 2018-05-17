/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:36:46 by ilarbi            #+#    #+#             */
/*   Updated: 2017/11/01 16:28:28 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

unsigned int	ft_get_color(int iter)
{
	if (iter < 10)
		return (0x006F81 * iter / IT_MAX);
	else if (iter < 20)
		return (0x44AA99 * iter / IT_MAX);
	else if (iter < 30)
		return (0x88CCEE * iter / IT_MAX);
	else if (iter < 40)
		return (0xDDCC77 * iter / IT_MAX);
	else if (iter < 50)
		return (0x117733 * iter / IT_MAX);
	else if (iter < 60)
		return (0x771155 * iter / IT_MAX);
	else if (iter < 70)
		return (0xCC6677 * iter / IT_MAX);
	else if (iter < 80)
		return (0x882255 * iter / IT_MAX);
	else if (iter < 90)
		return (0xAA4499 * iter / IT_MAX);
	else
		return (0x002C33 * iter / IT_MAX);
}
