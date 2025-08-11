/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:37:43 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/06 16:40:53 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += write (1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	if (n < 10)
	{
		n = n + '0';
		count++;
		write(1, &n, 1);
	}
	return (count);
}
/* int	main (void)
{
	int n;
	n = ft_putnbr(12345);
	printf("\n%d\n", n);
} */