/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:16:03 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 17:06:11 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg_conv(char c, va_list args)
{
	int	output;

	output = 0;
	if (c == 's')
		output = ft_putstr_pf(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		output = ft_print_arg_d(va_arg(args, int));
	else if (c == 'c')
		output = ft_putchar_pf(va_arg(args, int));
	else if (c == 'u')
		output = ft_print_arg_u(va_arg(args, unsigned int));
	else if (c == 'p')
		output = ft_print_arg_p(va_arg(args, size_t), "0123456789abcdef");
	else if (c == 'x')
		output = ft_print_arg_x(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (c == 'X')
		output = ft_print_arg_x(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (c == '%')
		output = ft_putchar_pf('%');
	return (output);
}
