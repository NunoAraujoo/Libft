/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:49:09 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/22 11:24:45 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

void	f(unsigned int i, char *s)
{
	*s += i;
}

int	main(void)
{
	char	s[] = "ok_";
	ft_striteri(s, *f);
	printf("%s\n", s);
}*/
