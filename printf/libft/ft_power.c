/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 18:23:01 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/05 17:39:46 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_power(unsigned int base, int ex)
{
	if (ex == 0)
		return (1);
	if (ex == 1)
		return (base);
	if (ex > 1)
		return (base * ft_power(base, ex - 1));
	return (-1);
}
