/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 08:54:35 by jdesmare          #+#    #+#             */
/*   Updated: 2016/12/14 16:45:24 by jdesmare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
	char	*str;
	char	c;
	int		n;
	unsigned int	u;

	str = "bonjour";
	c = 'c';
	n = 42;
	u = 3000;
	printf("vrai  printf = %   %\n");
	ft_printf("my ft_printf = %    %\n");
	return 0;
}
