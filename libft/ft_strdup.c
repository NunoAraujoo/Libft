/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:14:29 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/24 16:47:42 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;
	int		i;

	i = 0;
	while (s[i])
		i++;
	m = malloc(i + 1);
	if (!m)
		return (NULL);
	if (m)
	{
		m[i] = '\0';
		while (i--)
			m[i] = s[i];
	}
	return (m);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "ola wtv";

	printf("%s\n", ft_strdup(s));
}*/