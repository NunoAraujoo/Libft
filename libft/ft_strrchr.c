/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:18:44 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/10 10:34:28 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lenght;

	c = (unsigned char) c;
	lenght = 0;
	while (s[lenght])
	{
		lenght ++;
	}
	while (lenght >= 0)
	{
		if (s[lenght] == c)
			return ((char *)&s[lenght]);
		lenght--;
	}
	if (c == '\0')
		return ((char *)&s[lenght]);
	return (NULL);
}
