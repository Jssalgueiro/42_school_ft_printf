/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:14:09 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 14:18:19 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg_x(unsigned long p, char *base_hex)
{
	char	*str;
	int		output;

	str = ft_itoa_hexa(p, base_hex);
	output = ft_putstr_pf(str);
	free(str);
	return (output);
}
