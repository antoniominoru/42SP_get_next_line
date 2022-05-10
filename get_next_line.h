/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:00:39 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/09 23:11:08 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifdef GET_NEXT_LINE_H
// # define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
// # include <stddef.h>

// # ifndef BUFFER_SIZE
// # define BUFFER_SIZE 1000
// # endif

char	*get_next_line(int fd);

//get_next_line_utils
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
// #endif