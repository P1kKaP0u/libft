/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mustafa <mustafa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:17:57 by mustafa           #+#    #+#             */
/*   Updated: 2026/01/10 20:00:42 by mustafa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1[i] == s2[i] && i < n)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int main()
{
    char s1[14] = "ABC";
    char s2[14] = "AB";

    printf("%d", ft_strncmp(s1, s2, 3));
}