/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 09:46:05 by nbouhada          #+#    #+#             */
/*   Updated: 2020/11/25 09:46:14 by nbouhada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(void)
{
    char *line;

    int fd = open("test", O_RDONLY);
    get_next_line(fd, &line);
    printf("%s\n", line);
    get_next_line(fd, &line);
    printf("%s\n", line);
    get_next_line(fd, &line);
    printf("%s\n", line);
    get_next_line(fd, &line);
    printf("%s\n", line);
    get_next_line(fd, &line);
    printf("%s", line);
    get_next_line(fd, &line);
    printf("%s", line);
    get_next_line(fd, &line);
    printf("%s", line);

    close(fd);
}
