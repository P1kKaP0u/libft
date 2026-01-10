/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:21:37 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/10 21:52:44 by mustafa          ###   ########.fr       */
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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    while (big[i] != '\0' && i < len)
    {
            j = 0;
            if (little[j] == '\0')
                return ((char*)big);      
           while (little[j] == big[i+j] && little[j] != '\0')
           {
                j++;
                if (little[j] == '\0')
                {
                    return ((char *)&big[i]);
                }
           }
        i++;
    }
    return (NULL);
}

int main()
{
    char s1[30] = "Dyhavo youe have any";
    char s2[14] = "y";

    printf("%s", ft_strnstr(s1, s2, 15));
}