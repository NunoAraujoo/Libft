/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:19:43 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/06 16:41:47 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putunbr(n / 10);
		count += ft_putunbr(n % 10);
	}
	if (n < 10 && n >= 0)
	{
		n = n + '0';
		count++;
		write(1, &n, 1);
	}
	return (count);
}
