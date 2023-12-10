/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:25:41 by schiou            #+#    #+#             */
/*   Updated: 2023/03/28 12:42:18 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != 0)
		lst = lst -> next;
	return (lst);
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
	t_list	*last = ft_lstlast(head);
	printf("last element : %s\n", (char *)last -> content);
	return (0);
}*/
