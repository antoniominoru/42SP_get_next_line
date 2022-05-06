/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:00:36 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/07 01:02:47 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*statch;
	ssize_t		n;

// Validacao das variaveis
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	if (read(fd, buffer, 0) < 0)
	{
		free(buffer);
		return (NULL);
	}
// Leitura do buffer e criacao do statch - buffer dos buffers
	n = 1;
	while (!ft_strchr(statch, '\n') && n)
	{
		n = read(fd, buffer, BUFFER_SIZE);
		statch = ft_strjoin(statch, buffer);
	}
	free(buffer);
	
// separacao da linha e criacao no novo statch - buffer dos buffers
	line = 
	statch = 
	return (line);	
}
