/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:20:48 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/06 19:56:54 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_print(char c, va_list print)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_char((char)va_arg(print, int));
	else if (c == '%')
		len += ft_print_char('%');
	else if (c == 's')
		len += ft_print_str(va_arg(print, char *));
	else if (c == 'd' || c == 'i')
		len += ft_print_nbr(va_arg(print, int));
	else if (c == 'u')
		len += ft_print_nbr_uns(va_arg(print, unsigned int));
	else if (c == 'x')
		len += ft_print_hexa(va_arg(print, unsigned int), 32);
	else if (c == 'X')
		len += ft_print_hexa(va_arg(print, unsigned long long), 0);
	else if (c == 'p')
		len += ft_print_pointer(va_arg(print, unsigned long long));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	print;

	len = 0;
	i = 0;
	va_start(print, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", str[i + 1]))
			{
				len += get_print(str[i + 1], print);
				i++;
			}
		}
		else
			len += ft_print_char(str[i]);
		i++;
	}
	va_end(print);
	return (len);
}
