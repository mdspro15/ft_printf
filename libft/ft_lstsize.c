/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:20:11 by schiou            #+#    #+#             */
/*   Updated: 2023/03/28 12:34:27 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst != 0)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
/*
int	main()
{
	t_list	*head = ft_lstnew("First");
	ft_lstadd_front(&head, ft_lstnew("Second"));
	ft_lstadd_front(&head, ft_lstnew("Third"));

	t_list	*temp = head;
	while (temp != 0)
	{
		printf("%s\n", (char *)temp -> content);
		temp = temp -> next;
	}
	int	size = ft_lstsize(head);
	printf("number of element : %d", size);
	return (0);
}*/
