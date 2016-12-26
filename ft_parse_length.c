/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:15:31 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/13 18:16:09 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_parse_length(char *temp, int len)
{
	int		i;

	i = 0;
	if (temp[len] != '.')
		return (0);
	len++;
	i++;
	while (ft_isdigit(temp[len]))
	{
		len++;
		i++;
	}
	return (i);
}
