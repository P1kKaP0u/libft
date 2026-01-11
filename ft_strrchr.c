/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:52:23 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/11 02:50:04 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length_of_src;

	length_of_src = ft_strlen(s);
	while (length_of_src != -1)
	{
		if (s[length_of_src] == c)
		{
			return ((char *)&s[length_of_src]);
		}
		length_of_src--;
	}
	return (NULL);
}
