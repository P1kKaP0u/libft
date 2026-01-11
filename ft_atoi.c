/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 07:04:56 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/11 07:35:00 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	number;

	i = 0;
	minus = 1;
	number = 0;
	while (nptr[i] != '\0')
	{
		if (nptr[i] == '-')
		{
			minus *= -1;
		}
		if ('0' <= nptr[i] && nptr[i] <= '9')
		{
			number = number * 10 + nptr[i] % 48;
		}
		i++;
	}
	return (number * minus);
}
