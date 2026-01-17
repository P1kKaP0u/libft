/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:53:48 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/13 18:15:41 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	int		i;

	i = 0;
	sub_str = malloc(len * sizeof(char));
	if (sub_str == NULL)
	{
		return (NULL);
	}
	while (len > 0 && s[start] != '\0')
	{
		sub_str[i] = s[start];
		start++;
		i++;
		len--;
	}
	return (sub_str);
}
