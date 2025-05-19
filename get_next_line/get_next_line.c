/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:23:46 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/19 16:02:27 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			readc;

	if (fd < 0)
		return (NULL);
	line = NULL;
	if (*buffer != 0)
		line = ft_strjoin(line, buffer);
	while (f_n(buffer) == 0)
	{
		readc = read(fd, buffer, BUFFER_SIZE);
		if (readc == 0)
			break ;
		if (readc < 0)
		{
			free(line);
			return (NULL);
		}
		buffer[readc] = '\0';
		line = ft_strjoin(line, buffer);
	}
	ft_save(buffer);
	return (line);
}
