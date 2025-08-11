/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-g <ntomas-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:55:32 by ntomas-g          #+#    #+#             */
/*   Updated: 2025/05/26 11:09:38 by ntomas-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define MAX_FD 1024

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *line, char *buffer);
char	*ft_shift(char *stash);
int		ft_strlen(char *s);
int		ft_strchr(char *stash);
void	*ft_calloc(size_t bytes, size_t size);
char	*ft_putline(char *stash);
char	*ft_stash_add(char *stash, int fd);

#endif
