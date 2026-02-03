/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 03:10:20 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/13 14:05:42 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*casted_src;
	char unsigned		*casted_dest;

	i = 0;
	casted_src = (const unsigned char *)src;
	casted_dest = (char unsigned *)dest;
	while (i < n)
	{
		casted_dest[i] = casted_src[i];
		i++;
	}
	return (dest);
}
