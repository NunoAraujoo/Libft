/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:16:10 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/17 12:17:39 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reverse(char *str)
{
	int	start;
	int	end;
	int	holder;

	end = ft_strlen(str) - 1;
	start = 0;
	if (str[0] == '-')
		start = 1;
	while (start < end)
	{
		holder = str[start];
		str[start] = str[end];
		str[end] = holder;
		start++;
		end--;
	}
	return (str);
}

int	ft_numlen(long nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nbr;

	nbr = (long) n;
	i = 0;
	str = malloc(ft_numlen(nbr) + 1);
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[i++] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		str[i++] = '-';
	}
	while (nbr)
	{
		str[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[i] = '\0';
	return (ft_reverse(str));
}
/*#include <stdio.h>

int	main(void)
{
	char *res = ft_itoa(0);
    printf("%s\n", res);
    free(res);
}*/