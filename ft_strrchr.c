/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:52:23 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/10 21:01:16 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char *ft_strrchr(const char *s, int c)
{
    int length_of_src;

    length_of_src = ft_strlen(s);
    while (length_of_src != -1)
    {
        if (s[length_of_src] == c)
        {
            return ((char *)&s[length_of_src]);
        }
        length_of_src--;
    }
    return (NULL);
}

int main()
{
    char src[15] = "mustafa aktas";
    printf("%s\n", ft_strrchr(src, 'm'));
    printf("%p\n", &src[13]);
    printf("%s\n", strrchr(src, 'm'));
}