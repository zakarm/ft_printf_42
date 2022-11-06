/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:10:20 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/06 20:05:25 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ifzero(void)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	return (len);
}

int	ft_print_pointer(unsigned long long nbr)
{
	unsigned long long	value;
	char				data[64];
	int					i;
	int					len;

	len = ifzero();
	if (nbr == 0)
		return (len += write(1, "0", 1), len);
	i = 0;
	while (nbr != 0)
	{
		value = nbr % 16;
		nbr = nbr / 16;
		if (value < 10)
			data[i] = value + 48;
		else if (value >= 10)
			data[i] = value + 87;
		i++;
	}
	data[i] = '\0';
	i--;
	while (i >= 0)
		ft_print_char(data[i--]);
	return (ft_strlen(data) + len);
}
