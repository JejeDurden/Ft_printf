/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <jdesmare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:13:53 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 15:57:00 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int		ft_parse_width(char *temp)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (!(ft_isalnum(*temp)))
		temp++;
	nb = ft_atoi(temp);
	while (ft_isdigit(temp[i]))
		i++;
	return (i);
}
