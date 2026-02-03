/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 05:24:26 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/03 06:00:35 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
	
}

static void	f(void *content)
{
	*(int *)content = *(int *)content / 5;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> NULL
    t_list *head = malloc(sizeof(t_list));
    head->content = malloc(sizeof(int));
    *(int*)head->content = 15;
    head->next = malloc(sizeof(t_list));
    head->next->content = malloc(sizeof(int));
    *(int*)head->next->content = 25;
    head->next->next = malloc(sizeof(t_list));
    head->next->next->content = malloc(sizeof(int));
    *(int*)head->next->next->content = 35;
    head->next->next->next = NULL;

    // Print the list before clearing
    t_list *temp = head;
    printf("List before clearing:\n");
    while (temp != NULL) {
        printf("%d -> ", *(int*)temp->content);
        temp = temp->next;
    }
    printf("NULL\n");

	temp = head;
    ft_lstiter(head,f);
	printf("List after f function:\n");
    while (temp != NULL) {
        printf("%d -> ", *(int*)temp->content);
        temp = temp->next;
    }

    return 0;
}