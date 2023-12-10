/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:12:40 by schiou            #+#    #+#             */
/*   Updated: 2023/04/04 17:44:41 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	int_len(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	if (nb == 0)
		count++;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_treat_int(int num)
{
	ft_putnbr_fd(num, 1);
	return (int_len(num));
}
/*
int	main()
{
	int x = -2147483648;
	ft_treat_int(x);
	int num = ft_treat_int(x);
	printf("%d", num);
	return (0);
}*/
