/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:01:07 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/22 10:44:47 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include <stdio.h>

char	f(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	str1[] = "ok_";
	char	*str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/
