/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 03:10:20 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/12 21:09:07 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*casted_src;
	char		*casted_dest;

	i = 0;
	casted_src = (const char *)src;
	casted_dest = (char *)dest;
	while (i < n)
	{
		casted_dest[i] = casted_src[i];
		i++;
	}
	return (dest);
}
