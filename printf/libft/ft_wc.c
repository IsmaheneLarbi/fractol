/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 18:49:21 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/27 22:49:56 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
**wc = allouer wcsize
*/

char	*ft_wc(char *letter)
{
	int		i;
	char	*tab;
	char	**wc;

	i = 0;
	if (!letter)
		return (NULL);
	wc = ft_strsplit(letter, ' ');
	while (wc[i])
		i++;
	if (!(tab = (char *)ft_memalloc(sizeof(char) * (i + 1))))
		exit(-1);
	i = 0;
	free(letter);
	while (wc[i])
	{
		tab[i] = ft_bin_to_dec(wc[i]);
		free(wc[i]);
		i++;
	}
	free(wc);
	return (tab);
}
