/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_d.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:07:41 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 13:33:57 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg_d(int n)
{
	long int	conv;
	int			neg;

	neg = 0;
	conv = n;
	if (conv < 0)
	{
		conv = conv * -1;
		ft_putchar_pf('-');
		neg = 1;
	}
	if (conv > 9)
	{
		ft_print_arg_d(conv / 10);
		ft_putchar_pf(conv % 10 + 48);
	}
	else
		ft_putchar_pf(conv + 48);
	return (ft_intlen(conv) + neg);
}
