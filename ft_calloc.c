/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:12:50 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/30 10:27:04 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	m = malloc(nmemb * size);
	if (!m)
		return (NULL);
	ft_bzero(m, nmemb * size);
	return (m);
}
