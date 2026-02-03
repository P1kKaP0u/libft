/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 08:30:07 by muaktas           #+#    #+#             */
/*   Updated: 2026/02/02 22:17:29 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long n)
{
	int	digit;
	int	sign;

	sign = 0;
	digit = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (!(0 <= n && n <= 9))
	{
		digit++;
		n = n / 10;
	}
	return (digit + 1 + sign);
}

char	*ft_itoa(int n)
{
	long	longed_n;
	char	*str_of_int;
	int		digit;
	int		sign;

	longed_n = (long)n;
	sign = (longed_n < 0);
	digit = count_digit(longed_n);
	str_of_int = (char *)malloc(digit + 1);
	if (str_of_int == NULL)
		return (NULL);
	str_of_int[digit] = '\0';
	if (sign)
	{
		str_of_int[0] = '-';
		longed_n = -longed_n;
	}
	digit--;
	while (digit >= sign)
	{
		str_of_int[digit] = (longed_n % 10) + '0';
		longed_n = longed_n / 10;
		digit--;
	}
	return (str_of_int);
}
