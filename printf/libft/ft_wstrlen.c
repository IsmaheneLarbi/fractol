/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 19:00:34 by ilarbi            #+#    #+#             */
/*   Updated: 2017/06/08 13:24:44 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>

size_t	ft_wstrlen(wchar_t *s)
{
	size_t	size;

	size = 0;
	while (*s++)
		size++;
	return (size);
}
