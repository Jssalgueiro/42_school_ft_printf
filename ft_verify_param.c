/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:17:58 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 13:09:33 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_verify_param(char *str, va_list list_args)
{
	int	i;
	int	param;

	i = 0;
	param = 0;
	while (str[i])
	{
		if (str[i] != '%')
			param = param + ft_putchar_pf(str[i]);
		else if (str[i] == '%')
		{
			i++;
			param = param + ft_arg_conv(str[i], list_args);
		}
		i++;
	}
	return (param);
}
