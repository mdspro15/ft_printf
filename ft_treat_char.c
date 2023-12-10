/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:11:19 by schiou            #+#    #+#             */
/*   Updated: 2023/04/04 17:41:08 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
/*
int	main()
{
	int	c = 'A';
	int	num = ft_treat_char(c);
	printf("\n%d", num);
	return (0);
}*/
