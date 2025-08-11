/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:55:41 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/04/24 10:52:27 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_errormalloc(char **strings, int position, size_t len)
{
	int	i;

	i = 0;
	strings[position] = malloc(len);
	if (strings[position] == NULL)
	{
		while (i < position)
		{
			free(strings[i++]);
		}
		free(strings);
		return (1);
	}
	return (0);
}

static int	ft_put(char **strings, char const *s, char c, int words)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s && words--)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_errormalloc(strings, i, len + 1))
				return (1);
		}
		ft_strlcpy(strings[i], s - len, len + 1);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**strings;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_count_words(s, c);
	strings = malloc((sizeof(char *) * (words + 1)));
	if (!strings)
		return (NULL);
	strings[words] = NULL;
	if (ft_put(strings, s, c, words))
		return (NULL);
	return (strings);
}
/*int	main(void)
{
	char	*s = "    ola  miudo ";
	char	**v = ft_split(s, ' ');

	while (*v)
		printf("%s\n", *v++);
}*/