/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:55:33 by schiou            #+#    #+#             */
/*   Updated: 2023/04/26 14:15:18 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int nbr)
{
	int	count;

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

void	convert_to_x(unsigned int nbr, int c)
{
	if (nbr >= 16)
	{
		convert_to_x(nbr / 16, c);
		convert_to_x(nbr % 16, c);
	}
	else
	{
		if (nbr <= 9)
		{
			nbr = nbr + '0';
			write(1, &nbr, 1);
		}
		else
		{
			if (c == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			else
				ft_putchar_fd((nbr - 10 + 'A'), 1);
		}
	}
}

int	ft_treat_x(unsigned int nbr, int c)
{
	convert_to_x(nbr, c);
	return (hex_len(nbr));
}
