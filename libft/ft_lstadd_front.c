/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:10:15 by schiou            #+#    #+#             */
/*   Updated: 2023/03/28 12:25:00 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
int	main()
{
	t_list *mylist = NULL;
	int	data1 = 42;
	t_list *node1 = ft_lstnew(&data1);
	ft_lstadd_front(&mylist, node1);

	int	data2 = 1990;
	t_list *node2 = ft_lstnew(&data2);
	ft_lstadd_front(&mylist, node2);

	t_list *temp = mylist;
	while (temp != 0)
	{
		printf("%d\n", *(int *)temp -> content);
		temp = temp -> next;
	}
	return (0);
}*/
