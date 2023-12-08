/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:38:50 by navarre           #+#    #+#             */
/*   Updated: 2023/11/28 14:51:14 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

int	print_hex(unsigned int n, const char value)
{
	int	count;

	count = 0;
	if (n < 16)
	{
		if (n < 10)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (value == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (value == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
	if (n >= 16)
	{
		count += print_hex(n / 16, value);
		print_hex(n % 16, value);
	}
	return (count + 1);
}
/*#include <stdio.h>
int	main(void)
{
	char test[] = {7, 8, 5, 4};
	
	printf("%x\n", 7854);
	printf("\n%d = 4\n", print_hex(7854, 'x'));
	printf("%X\n", 7854);
	printf("\n%d = 4\n", print_hex(7854, 'X'));
	printf("\n%p", test);
}*/
