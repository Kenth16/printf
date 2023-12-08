/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:55:13 by navarre           #+#    #+#             */
/*   Updated: 2023/11/28 16:14:04 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
    int result;

    printf("Testing print_char:\n");

    // Test avec un caractère
    result = print_char('A');

    printf("\nprint_char result: %d\n", result);

    // Test avec un caractère spécial
    result = print_char('%');
	
    printf("\nprint_char result: %d\n", result);

    // Test avec un caractère de contrôle
    result = print_char('\n');
	
    printf("\nprint_char result: %d\n", result);

    return 0;
}*/
