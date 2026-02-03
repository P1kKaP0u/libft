/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 03:12:49 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 05:21:12 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


// void	ft_lstdelone(t_list *lst, void (*del)(void*))
// {
// 	t_list	*temp;

// 	temp = lst;
// 	lst->next = lst->next;
// 	del(temp->content);
// 	free(temp);
// }


void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}


void	print_list(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		printf("%p -> %s\n", (void *)current, (char *)(current->content));
		current = current->next;
	}
	printf("NULL\n");
}

// int	main(void)
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("ONE"));
// 	t_list *node2 = ft_lstnew(ft_strdup("TWO"));
// 	t_list *node3 = ft_lstnew(ft_strdup("THREE"));

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);

// 	printf("Before deletion:\n");
// 	print_list(lst);

// 	// Relinking of nodes before deleting -> wouldn't be able to print otherwise
// 	// node1->next = node2->next;
// 	ft_lstdelone(node2, free);

// 	printf("\nAfter deletion:\n");
// 	print_list(lst);

// 	while (lst != NULL)
// 	{
// 		t_list *temp = lst;
// 		lst = lst->next;
// 		free(temp->content);
// 		free(temp);
// 	}
// 	return (0);
// }