/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 22:40:08 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/12 20:55:40 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "../get_next_line.h"

int	main(void)
{
	int		fd[4];
	char	*line;

	fd[0] = open("files/test0.txt", O_RDONLY);
	fd[1] = open("files/test1.txt", O_RDONLY);
	fd[2] = open("files/test2.txt", O_RDONLY);
	line = get_next_line(fd[0]);
	printf("%s", line);
	line = get_next_line(fd[1]);
	printf("%s", line);
	line = get_next_line(fd[2]);
	printf("%s", line);
	line = get_next_line(fd[2]);
	printf("%s", line);
	line = get_next_line(fd[1]);
	printf("%s", line);
	line = get_next_line(fd[0]);
	printf("%s", line);
	line = get_next_line(fd[2]);
	printf("%s\n", line);
	line = get_next_line(fd[1]);
	printf("%s\n", line);
	line = get_next_line(fd[0]);
	printf("%s\n", line);
	free(line);
	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
}