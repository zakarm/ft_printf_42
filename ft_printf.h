/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:01:42 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/06 19:57:33 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
includes : stdlib for malloc - unistd for write - stdarg for varidic functions
*/

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

/*
functions
*/

int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_nbr(int n);
int		ft_print_hexa(unsigned int nbr, int lowupp);
int		ft_print_nbr_uns(unsigned int n);
int		ft_print_pointer(unsigned long long nbr);
int		get_print(char c, va_list print);
int		ifzero();
int		ft_numbers(long n);
int		ft_numbers_uns(unsigned int n);

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa_nbr_uns(unsigned int n);
char	*ft_itoa_nbr(int n);
char	leeszero_uns(unsigned int *nb);
char	leeszero(long *nb);
#endif 