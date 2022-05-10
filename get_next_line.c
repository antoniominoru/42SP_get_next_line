/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:00:36 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/10 23:11:09 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char **statch, char **line)
{
	size_t	i;
	char	*new_statch;

	i = 0;
	new_statch = NULL;
	while (((*statch)[i] != '\n') && ((*statch)[i] != '\0'))
		i++;
	if ((*statch)[i] == '\n')
	{
		i++;
		*line = ft_substr(*statch, 0, i);
		new_statch = ft_strdup(*statch + i);
	}
	else
		*line = ft_strdup(*statch);
	free(*statch);
	*statch = NULL;
	return (new_statch);
}

ssize_t	read_file(int fd, char **buffer, char **statch, char **line)
{
	char	*tmp;
	ssize_t	n;

	n = 1;
	while (!ft_strchr(*statch, '\n') && n)
	{
		n = read(fd, *buffer, BUFFER_SIZE);
		(*buffer)[n] = '\0'; // recall
		tmp = *statch;
		*statch = ft_strjoin(tmp, *buffer);
		free(tmp);
	}
	free(*buffer);
	*buffer = NULL;
	*statch = get_line(statch, line);
	if (**line == '\0')
	{
		free(*line);
		*line = NULL;
	}
	return (n);
}

char	*get_next_line(int fd)
{
	static char	*statch;
	char		*buffer;
	char		*line;
	ssize_t		n;

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
	if (!statch)
		statch = ft_strdup("");
	n = read_file(fd, &buffer, &statch, &line);
	if (n && !line)
		return (NULL);
	return (line);	
}
