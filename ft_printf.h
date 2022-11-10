/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:01:42 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/08 23:24:29 by zmrabet          ###   ########.fr       */
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

/*
functions
*/

/*print nbr*/
void	ft_putnbr(int n);
int		ft_numbers(int n);
int		ft_print_nbr(int n);

/*print char*/
int		ft_print_char(char c);

/*print hexa*/
int		ft_print_hexa(unsigned int nbr, int lowupp);

/*print pointer*/
int		ft_print_pointer(unsigned long long nbr);
int		ifzero(void);

/*print str*/
int		ft_print_str(char *s);

/*print utils*/
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

/*print uns*/
int		ft_numbers_uns(unsigned int n);
char	*ft_itoa_nbr_uns(unsigned int n);
int		ft_print_nbr_uns(unsigned int n);

/*printf*/
int		ft_printf(const char *str, ...);
int		get_print(char c, va_list print);

#endif 
