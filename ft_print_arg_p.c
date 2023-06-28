/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:12:45 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 17:13:03 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg_p(size_t p, char *base_hex)
{
	char	*str;
	int		output;

	if (p == 0)
		return (ft_putstr_pf("(nil)"));
	output = ft_putstr_pf("0x");
	str = ft_itoa_hexa(p, base_hex);
	output = ft_putstr_pf(str) + output;
	free(str);
	return (output);
}
