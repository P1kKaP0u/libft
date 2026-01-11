/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muaktas <muaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:42:08 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/06 16:26:29 by muaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>

int main()
{
    //printf("%d", ft_isalpha('*'));
	//printf("%d", ft_isdigit('a'));
	// printf("%d", ft_isalnum('a'));
	// printf("%d", ft_isalnum('F'));
	// printf("%d", ft_isalnum(9));
	// printf("%d", ft_isprint(""));
	char s[] = " mustafa 12 /";
	// printf("%ld", ft_strlen(s));
	ft_memset(s, 'A', 10);
	printf("%s", s);

}
