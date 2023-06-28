/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:30:31 by jsilva-s          #+#    #+#             */
/*   Updated: 2023/06/09 17:08:19 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*ft_strdup_pf(const char *s);
char	*ft_itoa_hexa(unsigned long n, char *base_hex);
int		ft_printf(const char *nptr, ...);
int		ft_countparam(const char *s);
int		ft_putstr_pf(char *s);
int		ft_putchar_pf(char c);
int		ft_intlen(long int i);
int		ft_print_arg_d(int n);
int		ft_hexalen(unsigned long i);
int		ft_print_arg_p(size_t p, char *base_hex);
int		ft_print_arg_x(unsigned long p, char *base_hex);
int		ft_arg_conv(char c, va_list args);
int		ft_verify_param(char *str, va_list list_args);
int		ft_print_arg_u(unsigned int n);

#endif