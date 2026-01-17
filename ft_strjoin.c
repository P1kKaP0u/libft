/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:17:12 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/17 12:28:45 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	new_string_len;
	size_t	s1_len;
	char	*new_string;

	s1_len = ft_strlen(s1);
	new_string_len = s1_len + ft_strlen(s2) + 1;
	new_string = (char *)malloc(new_string_len);
	if (new_string == NULL)
	{
		return (NULL);
	}
	if (ft_strlcpy(new_string, s1, s1_len + 1) != ft_strlen(new_string))
	{
		return ("Copy error s1 to new_string");
	}
	if (ft_strlcat(new_string, s2, new_string_len) != new_string_len -1)
	{
		return ("error: s1 + s2 does not created");
	}
	return (new_string);
}
