/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:25:21 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/06 18:52:12 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
			i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	char	data;

	st = (char *)s;
	data = (char)c;
	while (*st != data)
	{
		if (*st == '\0')
			return (NULL);
		st++;
	}
	return (st);
}
