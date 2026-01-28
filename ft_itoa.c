/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 17:17:27 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/23 17:40:22 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str_of_int;
	int		i;

	i = 0;
	str_of_int = (char *)malloc(10);
	if (n < 0)
	{
		str_of_int[i] = '-';
		i++;
		n * (-1);
	}
	if (0 <= n && n <= 9)
	{
		str_of_int[i] = '0' + n;
		i++;
	}
	else
		ft_itoa(n % 10);
	return (str_of_int);
}

int main()
{
	
	printf("%s", ft_itoa(23));
}