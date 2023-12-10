/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:39:05 by schiou            #+#    #+#             */
/*   Updated: 2023/04/26 13:39:37 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		num;
	va_list	args;

	i = 0;
	num = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			num += ft_check_format(args, format[i]);
		}
		else
			num += ft_treat_char(format[i]);
		i++;
	}
	va_end(args);
	return (num);
}
/*				
int	main()
{
	int	num = ft_printf("Hello, world!");
	ft_printf("\n%d", num);
	int	num1 = ft_printf("\n%c", 'A');
	ft_printf("\n%d", num1);
	return (0);
}*/
