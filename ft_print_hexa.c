/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:10:47 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/02 13:05:40 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hexa(unsigned int nbr, int lowupp)
{
	int		value;
	char	data[32];
	unsigned long	tmp;
	int		i;

    
    if (nbr == 0)
        return (ft_print_char(48));
    tmp = nbr;
	i = 0;
    while (tmp != 0)
    {
        value = tmp % 16;
		tmp = tmp / 16;
		if (value < 10)
			data[i] = value + 48;
		else if(value >= 10)
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
	return(ft_strlen(data));
}