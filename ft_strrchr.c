/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:52:23 by mustafa           #+#    #+#             */
/*   Updated: 2026/02/05 18:12:42 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length_of_src;

	length_of_src = ft_strlen(s);
	if ((unsigned char) !c)
		return ((char *)&s[length_of_src]);
	while (length_of_src != -1)
	{
		if ((unsigned char)s[length_of_src] == (unsigned char)c)
		{
			return ((char *)&s[length_of_src]);
		}
		length_of_src--;
	}
	return (NULL);
}
