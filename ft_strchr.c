/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:08:28 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/10 21:53:38 by mustafa          ###   ########.fr       */
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

char *ft_strchr(const char *s, int c)
{
    int i;
    int lenght_of_src;

    i = 0;
    lenght_of_src = ft_strlen(s) + 1;
    while (i < lenght_of_src)
    {
        if(s[i] == c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    return (NULL);
}

int main()
{
    char src[15] = "mustafa aktas";
    printf("%p\n", ft_strchr(src, 'a'));
    printf("%p\n", &src[13]);
    printf("%s\n", strrchr(src, 'a'));
}