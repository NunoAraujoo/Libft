/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:43:31 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/16 13:55:08 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	joint = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joint)
		return (NULL);
	while (s1[i])
	{
		joint[i] = s1[i];
		i++;
	}
	while (s2[j])
		joint[i++] = s2[j++];
	joint[i] = '\0';
	return (joint);
}
/*#include <stdio.h>

int	main(void)
{
	char *s1 = "ola ";
	char *s2 = "amigos";
	char *res = ft_strjoin(s1, s2);

	if (res)
	{
		printf("Result: %s\n", res);
		free(res);
	}
	else
		printf("ft_strjoin returned NULL\n");
	return 0;
}*/