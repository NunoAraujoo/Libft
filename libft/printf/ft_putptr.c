/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:57:08 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/13 14:27:42 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long)p, "0123456789abcdef");
	return (count);
}
