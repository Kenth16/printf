/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:01:56 by navarre           #+#    #+#             */
/*   Updated: 2023/12/01 15:10:23 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search_arg(va_list arg, const char format)
{
	int	count;

	count = 0;
	if (format == 's')
		count += print_str(va_arg(arg, char *));
	else if (format == 'p')
		count += print_ptr(va_arg(arg, void *));
	else if (format == 'c')
		count += print_char(va_arg(arg, int));
	else if (format == 'd' || format == 'i')
		count += print_int(va_arg(arg, int));
	else if (format == 'u')
		count += print_unsigned_int(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		count += print_hex(va_arg(arg, unsigned int), format);
	else if (format == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_search_arg(arg, format[i + 1]);
			i++;
		}
		else
			count += print_char(format[i]);
		i++;
	}
	va_end(arg);
	return (count);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;

	i = printf("hi\n");
	printf("i: %i\n", i);
	printf("%s\n", "toto");
	printf("Magic %s is %d", "number", 42);
	printf("Hexadecimal for %d is %x\n", 42, 42);
	return (0);
}*/
