/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 22:50:06 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/17 12:00:40 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	byte;

	if ((size != 0 || nmemb > SIZE_MAX / size))
	{
		return (NULL);
	}
	byte = nmemb * size;
	ptr = malloc(byte);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, byte);
	return (ptr);
}
