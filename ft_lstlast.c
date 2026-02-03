/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 02:00:30 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 03:07:03 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!current)
	{
		return (NULL);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

// int main()
// {
// 	t_list *head;
// 	t_list *head2;
// 	t_list n1,n2,n3;
// 	int a = 23 , b = 54, c = 12;

// 	n1.content = &a;
// 	n2.content = &b;
// 	n3.content = &c;

// 	head = &n1;
// 	n1.next = &n2;
// 	n2.next	= &n3;
// 	n3.next = NULL;
// 	head2 = head;
// 	while (head != NULL)
// 	{
// 		printf("%d-", *(int *)head->content);
// 		head = head->next;
// 	}
// 	head = head2;
// 	head2 = ft_lstlast(head);
// 	if (head2)
// 	{
// 		printf("\nLAST ITEM address %p", (void *)head2);
// 		printf("\nLAST ITEM content %d", *(int *)head2->content);
// 	}
// 	else
// 		printf("\nNOTHING");

// }
