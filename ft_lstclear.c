/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 04:38:13 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 05:22:46 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> NULL
    t_list *head = malloc(sizeof(t_list));
    head->content = malloc(sizeof(int));
    *(int*)head->content = 1;
    head->next = malloc(sizeof(t_list));
    head->next->content = malloc(sizeof(int));
    *(int*)head->next->content = 2;
    head->next->next = malloc(sizeof(t_list));
    head->next->next->content = malloc(sizeof(int));
    *(int*)head->next->next->content = 3;
    head->next->next->next = NULL;

    // Print the list before clearing
    t_list *temp = head;
    printf("List before clearing:\n");
    while (temp != NULL) {
        printf("%d -> ", *(int*)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

    // Clear the list
    ft_lstclear(&head, free);

    // Print the list after clearing (should be NULL)
    if (head == NULL) {
        printf("List is now empty.\n");
    }

    return 0;
}