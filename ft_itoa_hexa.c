/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:11:21 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 13:35:23 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_hexa(unsigned long n, char *base_hex)
{
	char		*output;
	long int	len;

	len = ft_hexalen(n);
	output = (char *)malloc(len + 1);
	if (output == NULL)
		return (NULL);
	output[len] = '\0';
	while (len > 0)
	{
		output[len - 1] = base_hex[n % 16];
		n = n / 16;
		len--;
	}
	return (output);
}
