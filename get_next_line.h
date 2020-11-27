/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:00:52 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/26 15:56:37 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif


int		get_next_line(int fd, char **line);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strcpy(char *dst, const char *src);
void	*ft_memset(void *s, int c, size_t n);
char    *ft_strnew(size_t size);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);

#endif
