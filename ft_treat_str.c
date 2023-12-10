/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:26:59 by schiou            #+#    #+#             */
/*   Updated: 2023/04/04 17:42:18 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i])
		i++;
	ft_putstr_fd(s, 1);
	return (i);
}
/*
int	main()
{
	char	*s = "Hello";
	ft_treat_string(s);
	int	num = ft_treat_string(s);
	printf("%d", num);
	char	*s1;
	ft_treat_string(s1);
	int	num1 = ft_treat_string(s1);
	printf("%d", num1);
	return (0);
}*/
