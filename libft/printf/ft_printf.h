/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:32:16 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/13 14:29:28 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *f, ...);
int	ft_putchar(int c);
int	ft_puthex(unsigned long n, char *base);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);
int	ft_putptr(void *p);

#endif