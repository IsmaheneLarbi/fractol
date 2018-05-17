/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 21:55:07 by ilarbi            #+#    #+#             */
/*   Updated: 2017/09/11 12:19:52 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int		written;
	char	*number;
	va_list ap;

	if (!format)
		return (-1);
	written = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%' && ++written)
			ft_putchar(*format++);
		else if (*format == '%' && format++
		&& ft_convert(&format, &written, ap, &number))
		{
			if (number && format++)
				ft_strdel(&number);
			else
				break ;
		}
	}
	va_end(ap);
	return (written);
}
