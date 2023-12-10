/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:33:39 by schiou            #+#    #+#             */
/*   Updated: 2023/03/28 14:27:21 by schiou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last -> next != 0)
		last = last -> next;
	last -> next = new;
}
/*
int	main()
{
	t_list	*head = ft_lstnew("lorem");
	ft_lstadd_back(&head, ft_lstnew("ipsum"));
	ft_lstadd_back(&head, ft_lstnew("dolor"));
	ft_lstadd_back(&head, ft_lstnew("sit"));

	t_list	*temp = head;
	while (temp != 0)
	{
		printf("%s\n", (char *)temp -> content);
		temp = temp -> next;
	}
	return (0);
}*/
