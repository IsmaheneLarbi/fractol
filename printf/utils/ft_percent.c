/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 19:01:58 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 17:00:47 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_percent(t_format **f, int *size)
{
	char	*number;

	if (!*f || !size)
		return (NULL);
	number = ft_strnew(1);
	ft_strcpy(number, "%");
	*size = 1;
	if ((*f)->flags)
	{
		(((*f)->flags->plus) ? ((*f)->flags->plus = 0) : 0);
		(((*f)->flags->space) ? ((*f)->flags->space = 0) : 0);
		(((*f)->flags->hash) ? ((*f)->flags->hash = 0) : 0);
	}
	return (number);
}
