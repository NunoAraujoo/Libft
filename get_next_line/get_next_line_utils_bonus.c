/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:30:17 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/26 11:09:32 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*gnl_calloc(size_t bytes, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = malloc(bytes * size);
	if (!str)
		return (NULL);
	while (i < (bytes * size))
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

int	gnl_strchr(char *stash)
{
	int	i;

	i = 0;
	if (!stash)
		return (0);
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	gnl_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*gnl_strjoin(char *stash, char *buffer)
{
	char	*joint;
	size_t	i;
	size_t	j;

	if (!stash)
		stash = gnl_calloc(1, sizeof(char));
	if (!stash || !buffer)
		return (NULL);
	if (gnl_strlen(stash) + gnl_strlen(buffer) == 0)
	{
		free(stash);
		return (NULL);
	}
	joint = gnl_calloc((gnl_strlen(stash) + gnl_strlen(buffer) + 1), sizeof(char));
	if (!joint)
		return (NULL);
	i = -1;
	while (stash[++i])
		joint[i] = stash[i];
	j = 0;
	while (buffer[j])
		joint[i++] = buffer[j++];
	free(stash);
	return (joint);
}

char	*gnl_shift(char *stash)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	str = malloc(gnl_strlen(stash) - i + 1);
	if (!str)
		return (NULL);
	while (stash[i++])
		str[j++] = stash[i];
	str[j] = '\0';
	free(stash);
	return (str);
}
