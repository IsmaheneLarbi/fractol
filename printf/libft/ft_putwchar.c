/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:47:33 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/22 13:43:19 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putwchar(wchar_t letter)
{
	int		i;
	char	**wc;
	int		tab[4];

	i = 0;
	wc = ft_strsplit(ft_wchart(letter), ' ');
	if ((MB_CUR_MAX == 1 && letter < 256) || (MB_CUR_MAX > 1 && letter < 128))
	{
		write(1, (char *)&letter, 1);
		return ;
	}
	while (wc[i])
	{
		tab[i] = ft_bin_to_dec(wc[i]);
		write(1, &tab[i], 1);
		i++;
	}
}
