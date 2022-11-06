/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:10:47 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/06 18:51:56 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int nbr, int lowupp)
{
	int				value;
	char			data[32];
	int				i;

	if (nbr == 0)
		return (ft_print_char(48));
	i = 0;
	while (nbr != 0)
	{
		value = nbr % 16;
		nbr = nbr / 16;
		if (value < 10)
			data[i] = value + 48;
		else if (value >= 10)
			data[i] = value + (55 + lowupp);
		i++;
	}
	data[i] = '\0';
	i--;
	while (i >= 0)
	{
		ft_print_char(data[i]);
		i--;
	}
	return (ft_strlen(data));
}
