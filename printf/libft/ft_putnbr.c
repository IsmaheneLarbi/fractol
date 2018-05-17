/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 16:10:21 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/09 13:37:26 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int			rest;
	long		nbr;

	nbr = (signed long)n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = (-1) * nbr;
	}
	if (nbr >= 10)
	{
		rest = nbr % 10;
		nbr = nbr / 10;
		ft_putnbr(nbr);
		ft_putchar(rest + '0');
	}
	else
		ft_putchar(nbr + '0');
}
