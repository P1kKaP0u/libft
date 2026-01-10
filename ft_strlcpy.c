/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 01:14:09 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/10 13:56:11 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    unsigned int length_src;

    i = 0;
    length_src = ft_strlen(src);
    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    if (size > 0)
        dst[i] = '\0';
    return(length_src);
}

int main()  
{
    const char *src;
    
    char dst[12];
    src = "mustafa kemal";


    int d = ft_strlcpy(dst, src, sizeof(dst));
    printf("%d\n", d);
    printf("%s", dst);


}