/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:34:39 by navarre           #+#    #+#             */
/*   Updated: 2023/11/28 18:07:27 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	print_hex_x(unsigned long long hex)
{
	int	i;

	i = 0;
	if (hex < 16)
	{
		if (hex < 10)
			ft_putchar_fd((hex + '0'), 1);
		else
			ft_putchar_fd((hex - 10 + 'a'), 1);
	}
	if (hex >= 16)
	{
		i += print_hex_x(hex / 16);
		print_hex_x(hex % 16);
	}
	return (i + 1);
}

int	print_ptr(void *ptr)
{
	unsigned long long	adress;

	adress = (unsigned long long)ptr;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
		write(1, "0x", 2);
	return (2 + print_hex_x(adress));
}

/*#include <stdio.h>

int main(void)
{
    void *ptr1 = (void *)0;
    void *ptr2 = (void *)0;

	printf("%p\n", ptr1);
	printf("%p\n", ptr2);
    print_ptr(ptr1); // Devrait imprimer "0x0"
	printf("\n %p %p \n", ptr1, ptr2);
    print_ptr(ptr2); // Devrait imprimer l'adresse hexadécimale de 123
    return (0);
}*/
