/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:16:21 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/11 00:34:52 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    int i;
    unsigned char *src;

    i = 0;
    src = (unsigned char *)s;
    while (i < n)
    {
        src[i] = '\0';
        i++;
    }
}

int main()
{
	char name[100]="Kemal Aktaş bugün diyardan gidiyor ";
	void *s = &name;
    int num[5] = {15,5,12,7};

    ft_bzero(&num, 10);

    printf("%d", num[3]);

}
