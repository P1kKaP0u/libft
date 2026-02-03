/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 02:53:31 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 04:25:08 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	new->next = NULL;

}
// #include <stdio.h>
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
// 	printf("NEW LIST");
	
// 	t_list *new = malloc(sizeof(t_list));
// 	int d = 99;
// 	new->content = &d;
// 	ft_lstadd_back(&head, new);
// 	while (head != NULL)
// 	{
// 		printf("%d-", *(int *)head->content);
// 		head = head->next;
// 	}


// }