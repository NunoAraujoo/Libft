/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:00:56 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/15 12:10:21 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	l = 0;
	if (!*little)
		return ((char *)big);
	while (big[l] && l < len)
	{
		i = 0;
		while ((little[i] && big[l]) && (little[i] == big[l]) && (l < len))
		{
			i++;
			l++;
		}
		if (little[i] == '\0')
			return ((char *)&big[l - i]);
		l = l - i + 1;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char    s1[] = "abcdefg";
    char    s2[] = "abc";
    size_t  max = 2;

    //char    *s = strnstr(s1, s2, max);
    //char    *i2 = ft_strnstr(s1, s2, max);


    printf("ft_strnstr: %s\n", ft_strnstr(s1, s2, max));
}*/
