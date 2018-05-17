/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:05:59 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/12 20:25:10 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_get_hex_value(char c)
{
	int			value;

	value = 10;
	if (ft_isdigit(c))
		return (c - 48);
	return (ft_tolower(c) - 97 + 10);
}

unsigned int	ft_htoi(char *hex)
{
	int			i;
	int			size;
	int			result;

	i = 0;
	size = 0;
	result = 0;
	if (hex)
	{
		while (hex[size] && ft_ishex(hex[size]))
			size++;
		while (--size >= 0)
		{
			result += ft_get_hex_value(hex[size]) * ft_power(16, i);
			i++;
		}
	}
	return (result);
}
