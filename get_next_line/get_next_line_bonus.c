/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:51:06 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/26 11:09:57 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_putline(char *stash)
{
	int		i;
	char	*str;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	str = malloc(i + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		str[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		str[i] = stash[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_stash_add(char *stash, int fd)
{
	int		bytes;
	char	*buffer;

	bytes = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!gnl_strchr(stash) && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[bytes] = '\0';
		stash = gnl_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FD];
	char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = ft_stash_add(stash[fd], fd);
	if (!gnl_strlen(stash[fd]))
	{
		free(stash[fd]);
		return (NULL);
	}
	str = ft_putline(stash[fd]);
	stash[fd] = gnl_shift(stash[fd]);
	return (str);
}
/* #include <stdio.h>

int main(void)
{
    int fd1 = open("text.txt", O_RDONLY);
    int fd2 = open("text2.txt", O_RDONLY);
    int fd3 = open("text3.txt", O_RDONLY);

    if (fd1 == -1 || fd2 == -1 || fd3 == -1)
    {
        perror("Error opening files");
        if (fd1 != -1) close(fd1);
        if (fd2 != -1) close(fd2);
        if (fd3 != -1) close(fd3);
        return 1;
    }

    char *line1 = NULL;
    char *line2 = NULL;
    char *line3 = NULL;
    int active = 3;

    while (active > 0)
    {
        if (active > 0)
        {
            line1 = get_next_line(fd1);
            if (line1)
            {
                printf("[file1]: %s\n", line1);
                free(line1);
            }
            else
                active--;
        }
        if (active > 1)
        {
            line2 = get_next_line(fd2);
            if (line2)
            {
                printf("[file2]: %s\n", line2);
                free(line2);
            }
            else
                active--;
        }
        if (active > 2)
        {
            line3 = get_next_line(fd3);
            if (line3)
            {
                printf("[file3]: %s\n", line3);
                free(line3);
            }
            else
                active--;
        }
    }
    close(fd1);
    close(fd2);
    close(fd3);
    return 0;
} */
