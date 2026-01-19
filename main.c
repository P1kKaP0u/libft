/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:42:08 by muaktas           #+#    #+#             */
/*   Updated: 2026/01/19 23:25:24 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>

int main()
{
	char s1[20] = "..mustafakemal..";
	char s2[10] = "..";
	ft_strtrim(s1,s2);
	printf("%s", s1);

}
