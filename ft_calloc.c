/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 22:50:06 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/13 00:32:41 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	byte;

	if (byte == 0 && nmemb * size > SIZE_MAX)
	{
		return (NULL);
	}
	byte = nmemb * size;
	ptr = malloc(byte);
	ft_bzero(ptr, byte);
	return (ptr);
}
