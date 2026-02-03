/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 01:16:43 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 04:09:27 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
// 	// while (head != NULL)
// 	// {
// 	// 	printf("%d-", *(int *)head->content);
// 	// 	head = head->next;
// 	// }
// 	head = head2;
// 	printf("OLD LIST SIZE - %d", ft_lstsize(head));
// 	// printf("NEW LIST");
	
// 	t_list *new = malloc(sizeof(t_list));
// 	int d = 99;
// 	new->content = &d;
// 	ft_lstadd_front(&head, new);
// 	printf("NEW LIST SIZE - %d", ft_lstsize(head));
// 	// while (head != NULL)
// 	// {
// 	// 	printf("%d-", *(int *)head->content);
// 	// 	head = head->next;
// 	// }

// }