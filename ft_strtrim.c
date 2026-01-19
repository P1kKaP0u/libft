/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:57:28 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/20 00:50:49 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_char_in_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	new_str_len;
	size_t	start_index;
	size_t	end_index;

	start_index = 0;
	end_index = ft_strlen(s1);
	while (s1[start_index] && check_char_in_set(set, s1[start_index]))
	{
		start_index++;
	}
	while (end_index > start_index
		&& check_char_in_set(set, s1[end_index -1]))
	{
		end_index--;
	}
	new_str_len = end_index - start_index;
	new_str = (char *)malloc(new_str_len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(new_str, &s1[start_index], new_str_len + 1);
	return (new_str);
}
