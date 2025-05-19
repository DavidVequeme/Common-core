/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:24:16 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/19 16:19:13 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	mod_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

char	*mod_strjoin(char *line, char *left2ret)
{
	char	*ret;
	size_t	i;
	size_t	j;

	if (!left2ret)
		return (NULL);
	i = 0;
	ret = malloc(ft_strlen(line) + ft_strlen(left2ret) + 1);
	if (!ret)
		return (free(line), NULL);
	while (line && line[i])
	{
		ret[i] = line[i];
		i++;
	}
	if (line)
		free(line);
	j = 0;
	while (left2ret[j] && left2ret[j] != '\n')
		ret[i++] = left2ret[j++];
	if (left2ret[j] == '\n')
		ret[i++] = '\n';
	ret[i] = '\0';
	return (ret);
}

int	f_n(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}

void	ft_save(char *buffer)
{
	size_t	lastp;
	size_t	i;

	i = 0;
	lastp = f_n(buffer);
	if (f_n(buffer) == 0)
	{
		buffer[0] = '\0';
		return ;
	}
	while (buffer[lastp])
	{
		buffer[i] = buffer[lastp];
		lastp++;
		i++;
	}
	while (i < BUFFER_SIZE + 1)
	{
		buffer[i] = 0;
		i++;
	}
}
