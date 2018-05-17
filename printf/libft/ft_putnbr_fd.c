/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 21:52:02 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/08 18:34:46 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			rest;
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (-1) * nbr;
	}
	if (nbr >= 10)
	{
		rest = nbr % 10;
		nbr = nbr / 10;
		ft_putnbr_fd(nbr, fd);
		ft_putchar_fd(rest + '0', fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}
