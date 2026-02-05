/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 22:50:06 by mustafa           #+#    #+#             */
/*   Updated: 2026/02/05 16:48:29 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	byte;

	if ((size != 0 && nmemb > SIZE_MAX / size))
	{
		return (NULL);
	}
	byte = nmemb * size;
	ptr = malloc(byte);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, byte);
	return (ptr);
}
