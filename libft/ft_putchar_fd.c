/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:31:06 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/23 15:53:33 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>
int	main(void)
{
	int	fd = open("test.txt", O_CREAT | O_RDWR, 00777);

	if(fd == -1)
		return (1);
	ft_putchar_fd('c', fd);
	close(fd);
	if (close(fd) == -1)
		return(1);
}*/
