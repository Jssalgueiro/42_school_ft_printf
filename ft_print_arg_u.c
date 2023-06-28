/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:07:41 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 14:12:54 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg_u(unsigned int n)
{
	if (n > 9)
	{
		ft_print_arg_u(n / 10);
		ft_putchar_pf(n % 10 + 48);
	}
	else
	{
		ft_putchar_pf(n + 48);
	}
	return (ft_intlen(n));
}
