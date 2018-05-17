/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invalid_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 13:47:31 by ilarbi            #+#    #+#             */
/*   Updated: 2017/07/21 13:56:06 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_invalid_type(char *pseudotype, int *size)
{
	char	*invalid;

	if (!(invalid = ft_strnew(1)) || !pseudotype)
		return (NULL);
	ft_strncpy(invalid, pseudotype, 1);
	*size = 1;
	return (invalid);
}
