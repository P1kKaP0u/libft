/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 00:30:11 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/11 00:15:33 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
		unsigned char *str;
		int i;

		i = 0;
		str = (unsigned char *)s;
		while (i<n)
		{	
			str[i] = (unsigned char)c;
			i++;
		}
		return(s);
}

int main()
{
	// char name[100]="Kemal Aktaş bugün diyardan gidiyor ";
	// void *s = &name;
	int number[3] = {10, 25, 8};

	ft_memset(&number, 25, 6);
	// char * s_ = (char *)s;
	printf("%d - %d - %d", number[0],number[1],number[2]);
	// 0000 0000 0000 0000 0000 0000 0000 1010 - // 0000 0000 0000 0000 0000 0000 0000 1101

	// 0000 0000 0001 1001 0001 1001 0001 1001- // 0000 0000 0000 0000 0001 1001 0001 1001

	// 0000 0000 0000 0000 0000 0000 0001 1001
}
