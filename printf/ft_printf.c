/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:30:53 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/16 14:17:52 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char f, va_list list)
{
	if (f == '%')
		return (write (1, "%", 1));
	if (f == 'd' || f == 'i')
		return (ft_putnbr (va_arg (list, int)));
	if (f == 's')
		return (ft_putstr (va_arg (list, char *)));
	if (f == 'p')
		return (ft_putptr(va_arg(list, void *)));
	if (f == 'c')
		return (ft_putchar (va_arg (list, int)));
	if (f == 'x')
		return (ft_puthex (va_arg (list, unsigned int), "0123456789abcdef"));
	if (f == 'X')
		return (ft_puthex (va_arg (list, unsigned int), "0123456789ABCDEF"));
	if (f == 'u')
		return (ft_putunbr (va_arg (list, unsigned int)));
	return (-1);
}

int	ft_printf(const char *f, ...)
{
	int		count;
	int		i;
	va_list	list;

	count = 0;
	va_start(list, f);
	i = 0;
	if (!f)
		return (0);
	while (f[i])
	{
		if (f[i] == '%')
		{
			count += ft_check(f[++i], list);
		}
		else
		{
			write(1, &f[i], 1);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}

/*# include <stdio.h>

int	main()
{
	int		x = 10;
	int		count = 0;
	char	str[] = "lets go";
	char	c = 'm';
	
	ft_printf("Percentage: 10%%\n\n");
	//Character
	ft_printf("Caracter: ");
	count = ft_printf("%c", c);
	printf ("\nReturn value: %d\nAgain: %d\n\n", count, count);
	//String
	ft_printf("String: ");
	count = ft_printf("%s", str);
	ft_printf("\nMy return value: %d\nPrintf: ", count);
	count = printf("%s", str);
	printf("\nPrintf return value: %d\n\n", count);
	//Decimal or integer
	ft_printf("Integer or decimal: ");
	count = ft_printf("%d", x);
	ft_printf ("\nMy return value: %d\nPrintf: ", count);
	count = printf("%d", x);
	printf ("\nPrintf return value: %d\n\n", count);
	//Two variables
	ft_printf("Multiple variables:");
	ft_printf(" Integer %i, character %c and then string %s.\n\n", x, c, str);
	//Unsigned int
	ft_printf ("Unsigned int: ");
	ft_printf ("%u", 10);
	//Hexadecimal underscore
	ft_printf("\nHexadecimal(x): Integer %i in hexadecimal is %x.\n", x, x);
	//Hexadecimal upperscore
	ft_printf("\nHexadecimal(X): Integer %i in hexadecimal is %X.\n", x, x);
	//Pointer
	ft_printf("\nMemory address of x is %p.\n", &c);
	printf("Printf memory address of x is %p.\n", &c);
} */
