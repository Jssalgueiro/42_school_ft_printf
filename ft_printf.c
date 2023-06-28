/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:20:58 by jazz              #+#    #+#             */
/*   Updated: 2023/06/09 17:13:19 by jsilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Write a library that contains ft_printf(), a function that will
mimic the original	printf(void).
External functions: malloc, free, write, va_start, va_arg, va_copy, va_end.
Can use libft.
Return value: the lenght of the value printed or neg number.
*/

#include "ft_printf.h"

int	ft_printf(const char *nptr, ...)
{
	va_list	list_args;
	int		output;
	char	*str;

	str = ft_strdup_pf(nptr);
	if (!str)
		return (0);
	va_start(list_args, nptr);
	output = ft_verify_param(str, list_args);
	va_end(list_args);
	free(str);
	return (output);
}

/* int	main()
{
	char	*ptr;
	
	int res1 = printf("test\n");
	int res2 = ft_printf("test\n");

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test c %c\n", 'c');
	res2 = ft_printf("Test c %c\n", 'c');

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test s %s\n", "string");
	res2 = ft_printf("Test s %s\n", "string");

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test p %p\n", ptr = 0);
	res2 = ft_printf("Test p %p\n", ptr = 0);

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test di %d\n%i\n", INT_MAX, INT_MIN);
	res2 = ft_printf("Test di %d\n%i\n", INT_MAX, INT_MIN);

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test u %u\n", UINT_MAX);
	res2 = ft_printf("Test u %u\n", UINT_MAX);

	printf("%d\n%d\n", res1, res2);
	
	res1 = printf("Test x %x\n", 282842);
	res2 = ft_printf("Test x %x\n", 282842);

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test X %X\n", 282842);
	res2 = ft_printf("Test X %X\n", 282842);

	printf("%d\n%d\n", res1, res2);

	res1 = printf("Test %%\n");
	res2 = ft_printf("Test %%\n");

	printf("%d\n%d\n", res1, res2);
}
 */