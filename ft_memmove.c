/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 04:03:38 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/13 14:41:06 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*casted_src;
	char unsigned		*casted_dest;

	i = 0;
	casted_src = (const unsigned char *)src;
	casted_dest = (char unsigned *)dest;
	if (casted_src > casted_dest)
	{
		while (i < n)
		{
			casted_dest[i] = casted_src[i];
			i++;
		}
	}
	else if (casted_src < casted_dest)
	{
		while (n > 0)
		{
			casted_dest[n - 1] = casted_src[n - 1];
			n--;
		}
	}
	return (dest);
}
