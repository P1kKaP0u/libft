/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:53:11 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/05 17:32:23 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_leng;
	char	*str;

	s_leng = ft_strlen(s);
	str = malloc(s_leng + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_memcpy(str, s, s_leng);
	str[s_leng] = '\0';
	return (str);
}
