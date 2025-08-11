/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:39:06 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/24 16:15:20 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
