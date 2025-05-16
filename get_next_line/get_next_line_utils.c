/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:24:16 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/16 16:16:38 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t ft_strlen(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}
char *ft_strjoin(char *line, char *left2ret)
{
	char 			*ret;
	unsigned long	i;
	unsigned long	j;
	
	if (!left2ret)
		return (0);
	i = 0;
	ret = malloc(ft_strlen(line) + ft_strlen(left2ret)+ 1);
	if (!ret)
		return (NULL);
	while (line && line[i])
	{
		ret[i] = line[i];
		i++;
	}
	j = 0;
	while (left2ret[j] && left2ret[j] != '\n')
		ret[i++] = left2ret[j++];
	if (left2ret[j] == '\n')
		ret[i++] = '\n';
	ret[i] = '\0';
	free(line);
	return(ret);
}

int	ft_strchr(char *s)
{
	size_t	i;
	
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\n')
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (i);
}

void ft_save(char *buffer)
{
	size_t	lastp;
	size_t	i;

	
	i = 0;
	lastp = ft_strchr(buffer) + 1;
	if (ft_strchr(buffer) == 0)
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