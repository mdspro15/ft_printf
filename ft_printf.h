/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:13:14 by schiou            #+#    #+#             */
/*   Updated: 2023/04/26 14:15:44 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_treat_char(int c);
int	ft_treat_str(char *s);
int	ft_treat_int(int num);
int	ft_treat_unsigned(unsigned int nbr);
int	ft_treat_ptr(unsigned long int nbr);
int	ft_treat_x(unsigned int nbr, int c);
int	ft_check_format(va_list args, int c);
int	ft_printf(const char *format, ...);

#endif
