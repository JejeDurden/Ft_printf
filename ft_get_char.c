/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 08:44:23 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 08:48:03 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_get_char(char *temp, char c)
{
	char	*back;

	back = temp;
	while (*back != '%')
	{
		if (*back == c)
			return (1);
		back--;
	}
	return (0);
}
