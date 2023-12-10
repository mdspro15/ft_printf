/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:52:24 by schiou            #+#    #+#             */
/*   Updated: 2023/04/26 11:21:32 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(unsigned long int nbr)
{
	unsigned long	count;

	count = 0;
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}

void	convert_to_hex(unsigned long int nbr)
{
	if (nbr >= 16)
	{
		convert_to_hex(nbr / 16);
		convert_to_hex(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
		{
			nbr = nbr + '0';
			write(1, &nbr, 1);
		}
		else if (nbr <= 15)
		{
			nbr = nbr - 10 + 'a';
			write(1, &nbr, 1);
		}
	}
}

int	ft_treat_ptr(unsigned long int nbr)
{
	int	size;

	size = 0;
	size += ft_treat_str("0x");
	convert_to_hex(nbr);
	size += ptr_len(nbr);
	return (size);
}
/*
int	main()
{
	unsigned long num = 1000;
	int num1 = ft_treat_pointer(num);
	printf("\n");
	printf("%d", num1);
	return (0);
}*/
