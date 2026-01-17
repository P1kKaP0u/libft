/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:53:11 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/13 14:07:15 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	s_leng;
	void	*ptr;

	s_leng = ft_strlen(s);
	ptr = malloc(s_leng);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return ((char *)ft_memcpy(ptr, s, s_leng));
}
