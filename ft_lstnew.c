/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 00:07:30 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 04:24:40 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main()
// {
// 	t_list *node;
// 	t_list *head;

// 	int nmb = 150;
// 	node = ft_lstnew(&nmb);
// 	head = node;

// 	while (head != NULL)
// 	{
// 		printf("%d\n", *(int *)head->content);
// 		head = head->next;
// 	}
// 	head = node;
// 	while (head != NULL)
// 	{
// 		t_list *next = head->next;
// 		free(head);
// 		head = next;
// 	}
	
// }