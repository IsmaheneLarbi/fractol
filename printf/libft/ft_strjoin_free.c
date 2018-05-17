/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 16:50:57 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/09 16:34:11 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin_free(char *s1, int free1, char *s2, int free2)
{
	char	*fresh;

	fresh = NULL;
	if (s1 && s2)
	{
		fresh = ft_strjoin(s1, s2);
		if (free1)
			ft_strdel(&s1);
		if (free2)
			ft_strdel(&s2);
	}
	return (fresh);
}
