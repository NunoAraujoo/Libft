/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:51:06 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/22 10:24:50 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	total;

	l = 0;
	while (dst[l])
	{
		l++;
	}
	total = l + ft_strlen(src);
	if (size > l)
	{
		i = 0;
		while ((src[i]) && (i + l < size - 1))
		{
			dst[l + i] = src[i];
			i++;
		}
		dst[l + i] = '\0';
	}
	else
		return (size + ft_strlen(src));
	return (total);
}
