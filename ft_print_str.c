/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:12:57 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/02 13:05:54 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_str(char *s)
{
	int	i;
	
	i = 0;
	if (!s)
		return (ft_print_str("(null)"));
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (ft_strlen(s));
}
