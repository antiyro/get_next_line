/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:04:25 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/25 13:04:47 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_strdup(const char *s)
{
	int		len_s;
	char	*mems;
	int		i;

	i = 0;
	len_s = ft_strlen(s);
	if (!(mems = (char *)malloc(sizeof(char) * len_s + 1)))
		return (NULL);
	while (s[i])
	{
		mems[i] = s[i];
		i++;
	}
	mems[i] = '\0';
	return (mems);
}

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	if (s1 && s2)
	{
		if (!(new = (char *)malloc(sizeof(char) *
			(ft_strlen(s1) + ft_strlen(s2) + 1))))
			return (NULL);
		ft_strlcpy(new, s1, ft_strlen(s1) + 1);
		ft_strlcat(new, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
		return (new);
	}
	return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && j + i + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	if (size <= 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

void	*ft_memset(void *s, int c, size_t n)
{
	char *str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		n--;
		str++;
	}
	return (s);
}

char    *ft_strnew(size_t size)
{
    char *str;
    if (!(str = malloc(sizeof(char) * size + 1)))
        return (NULL);
    ft_memset(str, '\0', size);
    return (str);    
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

void	ft_bzero(void *s, size_t n)
{
	char *str;

	str = s;
	while (n)
	{
		*str = '\0';
		n--;
		str++;
	}
}