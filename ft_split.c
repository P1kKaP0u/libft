/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:39:03 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/02 22:16:40 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_size(char const *s, char c)
{
	int	i;
	int	in_word;
	int	word_size;

	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			word_size++;
			in_word = 1;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (word_size);
}

static int	word_length_counter(char const *start, char c)
{
	int	length;

	length = 0;
	while (start[length] != c && start[length])
	{
		length++;
	}
	return (length);
}

static void	free_filled(char **filled_array)
{
	int	i;

	i = 0;
	while (filled_array[i])
	{
		free(filled_array[i]);
		i++;
	}
	free(filled_array);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	size_t		len;
	char		**splitted_s;

	i = 0;
	j = 0;
	splitted_s = (char **)malloc(word_size(s, c) * sizeof(char *));
	if (!splitted_s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = word_length_counter(&s[i], c);
		splitted_s[j] = ft_substr(&s[i], 0, len);
		if (!splitted_s)
			return (NULL);
		i += len;
		j++;
	}
	splitted_s[j] = NULL;
	return (splitted_s);
}
