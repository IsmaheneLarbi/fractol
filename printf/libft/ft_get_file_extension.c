/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_extension.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:28:01 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/13 15:02:14 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_file_extension(const char *filename)
{
	if (filename && ft_strrchr(filename, '.'))
		return (ft_strrchr(filename, '.') + 1);
	return (NULL);
}
