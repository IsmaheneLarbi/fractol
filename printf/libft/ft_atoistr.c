/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 14:36:55 by ilarbi            #+#    #+#             */
/*   Updated: 2017/05/25 17:21:22 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoistr(const char **str)
{
	int		i;
	int		isneg;
	long	result;

	i = 0;
	result = 0;
	isneg = 0;
	while (*(*str) == ' ' || *(*str) == '\v' || *(*str) == '\t' ||
		*(*str) == '\f' || *(*str) == '\r' || *(*str) == '\n')
		(*str)++;
	if (*(*str) == '-' || *(*str) == '+')
	{
		if (*(*str) == '-')
			isneg = 1;
		(*str)++;
	}
	if (!ft_isdigit(*(*str)))
		return (0);
	while (*(*str) && ft_isdigit(*(*str)))
	{
		result = result * 10 + (*(*str) - '0');
		(*str)++;
	}
	return ((isneg) ? -result : result);
}
