/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardurand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 15:41:16 by ardurand          #+#    #+#             */
/*   Updated: 2017/05/19 15:42:31 by ardurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	add_line(char **line, char *stock)
{
	char	*newline;

	newline = ft_strchr(stock, '\n');
	if (newline)
	{
		*newline = '\0';
		*line = ft_strdup(stock);
		newline++;
		ft_memmove(stock, newline, ft_strlen(newline) + 1);
		return (1);
	}
	if (ft_strlen(stock) > 0)
	{
		*line = ft_strdup(stock);
		*stock = '\0';
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	*stock = NULL;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	long long	ret;

	if (!line || fd < 0)
		return (-1);
	if (stock == NULL)
		stock = ft_strnew(0);
	while (!ft_strchr(stock, '\n'))
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret == -1)
			return (ret);
		if (ret == 0)
			return (add_line(line, stock));
		buf[ret] = '\0';
		tmp = ft_strjoin(stock, buf);
		ft_strdel(&stock);
		stock = tmp;
	}
	return (add_line(line, stock));
}
