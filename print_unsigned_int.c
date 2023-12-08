/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:32:17 by navarre           #+#    #+#             */
/*   Updated: 2023/11/28 15:33:52 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_int(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_unsigned_int(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	return (count + 1);
}
