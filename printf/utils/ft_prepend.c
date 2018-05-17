/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 20:45:19 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/26 20:46:13 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_prepend(char c, int nbr, int *written)
{
	int		i;

	i = 0;
	if (c == 'x')
		write(1, "0x", (nbr = 2));
	else if (c == 'X')
		write(1, "0X", (nbr = 2));
	else if (ft_tolower(c) == 'o')
		write(1, "0", (nbr = 1));
	else
	{
		while (i++ < nbr)
			write(1, &c, 1);
	}
	*written += nbr;
}
