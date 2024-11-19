/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:31:12 by luinasci          #+#    #+#             */
/*   Updated: 2024/11/19 17:29:29 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_x(va_list args)
{
	unsigned int	number;

	number = va_arg(args, unsigned int);
	return (ft_print_hex(number, "0123456789abcdef"));
}

int	handle_big_x(va_list args)
{
	unsigned int	number;

	number = va_arg(args, unsigned int);
	return (ft_print_hex(number, "0123456789ABCDEF"));
}

int	handle_c(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar(c));
}
