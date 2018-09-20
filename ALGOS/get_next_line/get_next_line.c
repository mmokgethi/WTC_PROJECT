/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 10:40:11 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/08/15 09:15:26 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_cpy_contents(int const fd, char **infile)
{
	char	*buff;
	char	*temp;
	int		value;

	if (!(buff = (char *)ft_memalloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	value = read(fd, buff, BUFF_SIZE);
	if (value > 0)
	{
		buff[value] = '\0';
		temp = ft_strjoin(*infile, buff);
		free(*infile);
		*infile = temp;
	}
	free(buff);
	return (value);
}

int			get_next_line(const int fd, char **line)
{
	static char	*infile = NULL;
	char		*line_feed;
	int			value;

	if ((!infile && (infile = (char *)ft_memalloc(sizeof(*infile))) == NULL) ||
			!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	line_feed = ft_strchr(infile, '\n');
	while (line_feed == NULL)
	{
		value = ft_cpy_contents(fd, &infile);
		if (value == 0)
		{
			if (ft_strlen(infile) == 0)
				return (0);
			infile = ft_strjoin(infile, "\n");
		}
		if (value < 0)
			return (-1);
		else
			line_feed = ft_strchr(infile, '\n');
	}
	*line = ft_strsub(infile, 0, ft_strlen(infile) - ft_strlen(line_feed));
	infile = ft_strdup(line_feed + 1);
	return (1);
}
