/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchart.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 12:33:42 by ilarbi            #+#    #+#             */
/*   Updated: 2017/09/03 11:51:52 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_wchart_to_bin(char **mask, char **number)
{
	int		size;
	int		szmask;

	if (!*mask || !*number)
		exit(-1);
	size = ft_strlen(*number) - 1;
	szmask = ft_strlen(*mask) - 1;
	while (size >= -1 && szmask >= 0)
	{
		if (size >= 0)
			(((*mask)[szmask] == 'x') ? ((*mask)[szmask--] = (*number)[size--])
			: (szmask--));
		if (size == -1 && szmask >= 0)
			(((*mask)[szmask] == 'x') ? ((*mask)[szmask--] = '0') : (szmask--));
	}
	ft_strdel(number);
	return (*mask);
}

char	*ft_wchart(wchar_t letter)
{
	int				size;
	char			*number;
	char			*mask;

	if (MB_CUR_MAX == 1)
		return ((letter >= 0 && letter < 256)
				? (ft_itoa_base((int)letter, 2)) : NULL);
	else if (MB_CUR_MAX > 1)
	{
		number = ft_itoa_base((int)letter, 2);
		size = ft_strlen(number);
		if (size <= 7 && letter < 128)
			return (number);
		else if (size > 7 && size <= 11)
			mask = ft_strdup("110xxxxx 10xxxxxx");
		else if (size > 11 && size <= 16)
			mask = ft_strdup("1110xxxx 10xxxxxx 10xxxxxx");
		else if (size > 16 && size <= 21)
			mask = ft_strdup("11110xxx 10xxxxxx 10xxxxxx 10xxxxxx");
		else
			exit(-1);
		ft_wchart_to_bin(&mask, &number);
		return (mask);
	}
	return (NULL);
}
