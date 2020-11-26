/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:00:07 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/25 13:00:16 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_check_reminder(char *reminder, char **line)
{
	char *ptr_n;

	ptr_n = NULL;
	if (reminder)
	{
		if ((ptr_n = ft_strchr(reminder, '\n')))
		{
			*ptr_n = '\0';
			*line = ft_strdup(reminder);
			ptr_n++;
			ft_strlcpy(reminder, ptr_n, ft_strlen(ptr_n));
		}
		else
		{
			*line = ft_strdup(reminder);
			ft_bzero(reminder, ft_strlen(reminder));	
		}
	}
	else
	{
		*line = ft_strnew(1);
	}
	return (ptr_n);
}

int		get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE + 1];
	int ret;
	char *ptr_n;
	static char *reminder;
	char *tmp;

	ptr_n = ft_check_reminder(reminder, line);
	while (!ptr_n && (ret = read(fd, buf, BUFFER_SIZE)))
	{
		buf[ret] = '\0';
		if ((ptr_n = ft_strchr(buf, '\n')))
		{
			*ptr_n = '\0';
			ptr_n++;
			reminder = ft_strdup(ptr_n);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		free(tmp);
	}
	return (0);
}
