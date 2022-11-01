/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmrabet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:01:42 by zmrabet           #+#    #+#             */
/*   Updated: 2022/11/01 15:46:03 by zmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

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
int		ft_printf(const char *, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int     ft_print_nbr(int n);
int     ft_print_hexa(unsigned int nbr, int lowupp);
int		ft_print_nbr_uns(unsigned int n);
size_t	ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
int     ft_print_pointer(unsigned long long nbr);

#endif