/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:10:20 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/02 13:05:51 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_pointer(unsigned long long nbr)
{
	unsigned long long		value;
	unsigned long long		tmp;
	char					data[60];
	int						i;
	int						len;

	len = 0;
	len += write(1, "0x", 2);
	if (nbr == 0)
	{
		len += write(1, "0", 1);
		return (len);
	}
    tmp = nbr;
	i = 0;
    while (tmp != 0)
    {
        value = tmp % 16;
		tmp = tmp / 16;
		if (value < 10)
			data[i] = value + 48;
		else if(value >= 10)
			data[i] = value + 87;
		i++;
    }
	data[i] = '\0';
	i--;
	while (i >= 0)
	{
		ft_print_char(data[i]);
		i--;
	}
	return(ft_strlen(data) + len);
}
