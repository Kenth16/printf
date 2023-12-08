/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:58:19 by navarre           #+#    #+#             */
/*   Updated: 2023/11/28 14:51:10 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

int	print_int(int nbr)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		nbr *= -1;
		i++;
	}
	if (nbr >= 10)
		i += print_int(nbr / 10);
	ft_putchar_fd((nbr % 10) + 48, 1);
	return (i + 1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("\n%d = 11\n", print_int(-2147483648));
	printf("\n%d = 6\n", print_int(-48654));
	printf("\n%d = 6\n", print_int(654321));
}
*/