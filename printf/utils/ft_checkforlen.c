/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkforlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 18:16:09 by ilarbi            #+#    #+#             */
/*   Updated: 2017/07/26 16:44:05 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "utils.h"

/*
**si pas de type | % apres le len mais pas d arg ?
**dois gerer ca avant d arriver ici
**changed test of format + 2 from istype to isok
*/

void	ft_checkforlen(const char **format, t_format **f)
{
	if (!*format)
		exit(-1);
	if (!*(*format) || !ft_islen(*(*format)))
	{
		(*f)->len = NULL;
		return ;
	}
	if (!((*f)->len = ft_memalloc(sizeof(t_len))))
		exit(-1);
	if (*(*format + 1) && ft_isok(*(*format + 1)) && ft_islen(*(*format)))
	{
		((*(*format) == 'j') ? ((*f)->len->j = 1) : 0);
		((*(*format) == 'z') ? ((*f)->len->z = 1) : 0);
		((*(*format) == 'l') ? ((*f)->len->l = 1) : 0);
		((*(*format) == 'h') ? ((*f)->len->h = 1) : 0);
		(*format)++;
	}
	else if (*(*format + 2) && ft_isok(*(*format + 2)))
	{
		((!ft_strncmp(*format, "hh", 2)) ? ((*f)->len->hh = 1) : 0);
		((!ft_strncmp(*format, "ll", 2)) ? ((*f)->len->ll = 1) : 0);
		(((*f)->len->hh || (*f)->len->ll) ? (*format) += 2 : 0);
	}
	else
		return ;
}
