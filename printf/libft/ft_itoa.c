/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:17:56 by ilarbi            #+#    #+#             */
/*   Updated: 2017/04/04 12:35:34 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	size_t	ft_numberlength(signed long nbr)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

static	char	*ft_convert(char **number, signed long *nbr,
		size_t isneg, size_t *len)
{
	long	rest;

	rest = 0;
	if (isneg && *nbr != 0)
		*number[0] = '-';
	*(*number + *len) = '\0';
	--*len;
	if (*nbr == 0)
		*(*number + (*len)) = 0 + 48;
	while (number && *number && nbr && *nbr > 0)
	{
		rest = *nbr % 10;
		*nbr = *nbr / 10;
		*(*number + *len) = (char)(rest + 48);
		--*len;
	}
	return (*number);
}

char			*ft_itoa(int n)
{
	signed	long	nbr;
	size_t			len;
	size_t			isneg;
	char			*number;

	nbr = (signed long)n;
	len = 0;
	isneg = 0;
	if (nbr < 0)
	{
		len++;
		nbr = (-1) * nbr;
		isneg = 1;
	}
	len += ft_numberlength(nbr);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (number)
		number = ft_convert(&number, &nbr, isneg, &len);
	return (number);
}
