/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:20:27 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/13 14:10:35 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length_of_src;
	size_t	init_length_of_dst;

	length_of_src = ft_strlen(src);
	init_length_of_dst = ft_strlen(dst);
	i = init_length_of_dst;
	j = 0;
	while (src[j] != '\0' && j < size - init_length_of_dst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
	{
		dst[i + 1] = '\0';
	}
	return (length_of_src + init_length_of_dst);
}
