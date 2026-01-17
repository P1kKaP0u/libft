/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:57:28 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/17 21:27:52 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_index_finder(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	last_index;




}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	string_len;
	size_t	start_index;
	size_t	j;
	size_t	set_last;

	j = 0;
	start_index = 0;
	string_len = ft_strlen(s1);
	set_last = ft_strlen(set);
	new_string = (char *)malloc(string_len + 1);
	if (new_string == NULL)
		return (NULL);
	while (set[j] && s1 && s1[start_index] == set[j])
	{
		start_index++;
		j++;
	}
	while (s1 && s1[string_len - 1] == set[set_last -1])
	{
		string_len--;
		set_last--;
	}
	ft_strlcpy(new_string, &s1[start_index], string_len - start_index + 2);
	return (new_string);
}


