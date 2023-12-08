/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:31:27 by navarre           #+#    #+#             */
/*   Updated: 2023/12/01 15:02:02 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_hex(unsigned int n, const char value);
int	print_int(int nbr);
int	print_ptr(void *ptr);
int	print_str(const char *str);
int	print_unsigned_int(unsigned int n);

#endif