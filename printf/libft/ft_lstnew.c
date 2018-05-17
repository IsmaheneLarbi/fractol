/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 15:07:17 by ilarbi            #+#    #+#             */
/*   Updated: 2017/05/01 17:15:23 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(t_list));
	if (elt)
	{
		elt->content = malloc(content_size);
		if (content && elt->content)
		{
			ft_memcpy(elt->content, content, content_size);
			elt->content_size = content_size;
		}
		else
		{
			elt->content = NULL;
			elt->content_size = 0;
		}
		elt->next = NULL;
	}
	return (elt);
}
