/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 13:10:44 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/23 20:20:07 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_redirect_p(t_format **f, void *address, int *size)
{
	char			*number;
	unsigned long	add;

	if (!*f || !size)
		return (NULL);
	add = (unsigned long)address;
	number = ft_cast_unsigned_l(add, 16);
	ft_strminimalize(&number);
	if (*number == '0' && (*f)->width && ((*f)->width->max == 0))
		*size = (*f)->width->max;
	else
		*size = ft_strlen(number);
	return (number);
}
