/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:28:48 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/06 18:52:03 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numbers(long n)
{
	long	res;
	int		i;

	res = n;
	i = 0;
	if (res <= 0)
	{
		res *= -1;
		i++;
	}
	while (res > 0)
	{
		i++;
		res /= 10;
	}
	return (i);
}

char	leeszero(long *nb)
{
	*nb *= -1;
	return ('-');
}

char	*ft_itoa_nbr(int n)
{
	char	*p;
	int		k;
	long	nb;

	nb = n;
	k = ft_numbers(n);
	p = (char *)malloc(sizeof(char) * (k + 1));
	if (!p)
		return (NULL);
	p[k--] = '\0';
	if (nb < 0)
	{
		p[0] = leeszero(&nb);
	}
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

int	ft_print_nbr(int n)
{
	char	*s;

	s = ft_itoa_nbr(n);
	ft_print_str(s);
	free(s);
	return (ft_strlen(s));
}
