/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvidal <dvidal@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:33:45 by dvidal            #+#    #+#             */
/*   Updated: 2025/05/16 17:10:57 by dvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

int main(void)
{
	int	i;
	int	fd = open("teste.txt", O_RDONLY);
	char *line;

	i = 0;
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	// while (i < 2)
	// {
	// 	line = get_next_line(fd);
	// 	printf("%s", line);
	// 	free(line);
	// 	i++;
	// }
	close(fd);
	// printf("%c", '\n');
}
