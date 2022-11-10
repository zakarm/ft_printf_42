/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_uns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:34:06 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/08 03:07:09 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numbers_uns(unsigned int n)
{
	unsigned int	res;
	int				i;

	res = n;
	i = 0;
	if (res == 0)
		i++;
	while (res > 0)
	{
		i++;
		res /= 10;
	}
	return (i);
}

char	*ft_itoa_nbr_uns(unsigned int n)
{
	char			*p;
	int				k;
	unsigned int	nb;

	nb = n;
	k = ft_numbers_uns(n);
	p = (char *)malloc(sizeof(char) * (k + 1));
	if (!p)
		return (NULL);
	p[k--] = '\0';
	if (nb < 9 || nb == 0)
		p[k--] = nb + 48;
	else
	{
		while (nb > 0)
		{
			p[k--] = (nb % 10) + 48;
			nb /= 10;
		}
	}
	return (p);
}

int	ft_print_nbr_uns(unsigned int n)
{
	char			*s;
	unsigned int	data;
	int				size;

	data = (unsigned int)n;
	s = ft_itoa_nbr_uns(data);
	size = ft_print_str(s);
	free(s);
	return (size);
}
