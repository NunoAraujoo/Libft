/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:22:54 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/06 16:37:01 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	if (!s)
		s = "(null)";
	count = 0;
	while (s[count])
	{
		write (1, &s[count], 1);
		count++;
	}
	return (count);
}
/* #include <stdio.h>
int	main(void)
{
	char	*s = "ola";
	int		n;

	n = ft_putstr(s);
	printf("\n%d\n", n);
} */