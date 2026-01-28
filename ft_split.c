// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2026/01/17 15:39:03 by muaktas           #+#    #+#             */
// /*   Updated: 2026/01/23 16:55:34 by mustafa          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// #include <stdio.h>

// static int	find_number_of_delimeter(char const *s, char c)
// {
// 	int	i;
// 	int	number_of_delimeter;

// 	i = 0;
// 	number_of_delimeter = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 		{
// 			number_of_delimeter++;
// 		}
// 		i++;
// 	}
// 	return (number_of_delimeter);
// }

// // static int	*find_index_of_delimeter(char const *s, char c)
// // {
// // 	int	i;
// // 	int	number_of_delimeter;
// // 	int	*delimeter_indexes;
// // 	int	j;

// // 	j = 0;
// // 	i = 0;
// // 	number_of_delimeter = find_number_of_delimeter(s, c);
// // 	delimeter_indexes = (int *)malloc((number_of_delimeter) * sizeof(int));
// // 	if (!delimeter_indexes)
// // 		return (NULL);
// // 	while (s[i])
// // 	{
// // 		if (s[i] == c)
// // 		{
// // 			delimeter_indexes[j] = i;
// // 			j++;
// // 		}
// // 		i++;
// // 	}
// // 	return (delimeter_indexes);
// // }

// size_t	s_len(const char *s, char c, size_t start)
// {
// 	size_t	end;

// 	end = start;
// 	while (s[end] != '\0')
// 	{
// 		end++;
// 		if (s[end] == c)
// 		{
// 			return (end - start);
// 		}
// 	}
// 	return (NULL);
// }

// // char	**ft_split(char const *s, char c)
// // {
// // 	char		**splitted_strings;
// // 	size_t		number_of_str;
// // 	size_t		i;
// // 	size_t		j;
// // 	size_t		s_index;

// // 	i = 0;
// // 	s_index = 0;
// // 	number_of_str = find_number_of_delimeter(s, c) + 1;
// // 	splitted_strings = (char **)malloc(sizeof(char *) * (number_of_str + 1));
// // 	if (!splitted_strings)
// // 		return (NULL);
// // 	while (i < number_of_str)
// // 	{
// // 		splitted_strings[i] = (char *)malloc(sizeof(char) * s_len(s, c, j));
// // 		j = 0;
// // 		while (s[s_index] != c && s[s_index])
// // 		{
// // 			splitted_strings[i][j] = s[s_index];
// // 			j++;
// // 			s_index++;
// // 		}
// // 		s_index++;
// // 		i++;
// // 	}
// // 	return (splitted_strings);
// // }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	count;

// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			count++;
// 		}
		
// 		start++;
// 	}
	
// }

// int main()
// {
// 	char s1[50] = "mustafa ,kemal , aktas";
// 	char c = ',';
// 	char **s;
// 	int i = 0;
// 	int j = 0;

// 	s = ft_split(s1,c);
// 	while (s[i])
// 	{
// 		printf("%s",s[i]);
// 		i++;
// 	}
	
// 	free(s);

// }
