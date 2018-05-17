/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:08:57 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/13 17:07:48 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*get_line(char *tmp, char **rest)
{
	char	*line;

	if ((*rest = ft_strchr(tmp, '\n')))
	{
		line = ft_strsub(tmp, 0, *rest - tmp);
		(*rest)++;
		*rest = ft_strdup(*rest);
	}
	else
		line = ft_strdup(tmp);
	return (line);
}

int				get_next_line(const int fd, char **line)
{
	static struct s_file	f;

	if (fd >= 0 && fd <= OPEN_MAX && line && (*line = ft_strnew(0)))
	{
		if (f.rest && fd == f.oldfd)
		{
			f.tmp2 = f.rest;
			*line = ft_strjoin_free(*line, 1, get_line(f.rest, &f.rest), 1);
			free(f.tmp2);
			if (f.rest)
				return (1);
		}
		while ((f.ret = read(fd, f.tmp1, BUFF_SIZE)) > 0)
		{
			f.tmp1[f.ret] = '\0';
			f.oldfd = fd;
			*line = ft_strjoin_free(*line, 1, get_line(f.tmp1, &f.rest), 1);
			if (f.rest)
				return (1);
		}
		if (!f.ret)
			return (*(*line) ? 1 : 0);
	}
	return (-1);
}
