/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:23:46 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/16 16:06:19 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	char 		*line;
	int readc;
	
	line = NULL;
	if (*buffer != 0)
		line = ft_strjoin(line, buffer);
	while (ft_strchr(buffer) == 0)
	{
		readc = read(fd, buffer, BUFFER_SIZE);
		if (readc == 0)
			break ;
		if (readc < 0)
		{
			free(line);
			buffer[0] = '\0';
			return (NULL);
		}
		buffer[readc] = '\0';
		line = ft_strjoin(line, buffer);
	}
	ft_save(buffer);
	return(line);
}
