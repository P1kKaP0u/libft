/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 04:03:38 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/12 22:46:12 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	const char	*casted_src;
	char		*casted_dest;
	int			dest_index;

	i = 0;
	casted_src = (const char *)src;
	casted_dest = (char *)dest;
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
