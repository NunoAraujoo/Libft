/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:15:25 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/13 14:29:24 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char *base)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += ft_puthex(n / 16, base);
	return (counter += ft_putchar(base[n % 16]));
}
