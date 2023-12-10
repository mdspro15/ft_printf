/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:36:49 by schiou            #+#    #+#             */
/*   Updated: 2023/04/26 14:15:56 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, int c)
{
	int	num;

	num = 0;
	if (c == 'c')
		num += ft_treat_char(va_arg(args, int));
	else if (c == 's')
		num += ft_treat_str(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		num += ft_treat_int(va_arg(args, int));
	else if (c == 'p')
		num += ft_treat_ptr(va_arg(args, unsigned long));
	else if (c == 'u')
		num += ft_treat_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		num += ft_treat_x(va_arg(args, unsigned int), c);
	else if (c == '%')
		num += write(1, "%", 1);
	return (num);
}
