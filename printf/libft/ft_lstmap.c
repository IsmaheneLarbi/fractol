/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 18:30:31 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/09 13:35:44 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*fresh;
	t_list	*buff;

	buff = NULL;
	if (f && lst)
	{
		fresh = f(lst);
		buff = fresh;
		while (fresh && lst->next)
		{
			lst = lst->next;
			fresh->next = (t_list *)malloc(sizeof(t_list));
			fresh->next = f(lst);
			fresh = fresh->next;
		}
	}
	return (buff);
}
