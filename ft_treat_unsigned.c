/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:11:58 by schiou            #+#    #+#             */
/*   Updated: 2023/04/26 11:09:17 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_len(unsigned int nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

void	put_unsigned(unsigned int nbr)
{
	unsigned int	digit;

	if (nbr > 9)
	{
		put_unsigned(nbr / 10);
		put_unsigned(nbr % 10);
	}
	else
	{
		digit = nbr + 48;
		write(1, &digit, 1);
	}
}

int	ft_treat_unsigned(unsigned int nbr)
{
	put_unsigned(nbr);
	return (unsigned_len(nbr));
}
/*
int	main()
{
	unsigned int num = 4294967295;
	int num1 = printf("%u", num);
	printf("\n%d", num1);
	return (0);
}*/
