/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 08:54:06 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/13 08:54:24 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		var;
	size_t		i;

	i = 0;
	if (!format)
		return (-1);
	va_start(var, format);
	i = ft_get_arg(format, &var);
	va_end(var);
	return (i);
}
