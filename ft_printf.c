/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:20:48 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/01 16:46:20 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	int i;
	int len;

	len = 0;
	i = 0;
	va_list print;
	va_start(print, str);
	while (str[i] != '\0') 
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				len += ft_print_char((char)va_arg(print, int));
			else if (str[i + 1] == '%')
				len += ft_print_char('%');
			else if (str[i + 1] == 's')
				len += ft_print_str(va_arg(print, char *));
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				len += ft_print_nbr(va_arg(print, int));
			else if (str[i + 1] == 'u')
				len += ft_print_nbr_uns(va_arg(print, unsigned int));
			else if (str[i + 1] == 'x')
				len += ft_print_hexa(va_arg(print, unsigned int), 32);
			else if (str[i + 1] == 'X')
				len += ft_print_hexa(va_arg(print, unsigned long long), 0);
			else if (str[i + 1] == 'p')
				len += ft_print_pointer(va_arg(print, unsigned long long));
			i++;
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(print);
	return (len);
}