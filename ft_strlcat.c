/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:20:27 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/10 16:17:28 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *src)
{
    int counter;

    counter = 0;
    while (src[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    int i;
    int j;
    int length_of_src;
    int init_length_of_dst;

    length_of_src = ft_strlen(src);
    init_length_of_dst = ft_strlen(dst);
    i = init_length_of_dst;
    j = 0;
    while (src[j] != '\0' && j < size-init_length_of_dst-1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    if (i<size)
    {
        dst[i+1] = '\0';
    }
    return (length_of_src + init_length_of_dst);
}

int main()
{
    char src[10] = "mustafa";
    char dst[15] = "kemal";

    int d = ft_strlcat(dst, src, sizeof(dst));
    printf("%s\n", dst);
    printf("%d", d);
    }