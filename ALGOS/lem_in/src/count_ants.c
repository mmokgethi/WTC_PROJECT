/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:49:52 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:49:56 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	count_ants(t_map *m, char *line)
{
	int		i;
	char	*s;

	i = 0;
	m->started = 1;
	m->ants_str = join_str(m->ants_str, line, 0);
	if (line[0] == '#')
		return ;
	s = ft_strtrim(line);
	if ((m->ants = ft_atoi(s)) <= 0)
		exit_func(m, 1);
	while (s[i] != '\n' && s[i] != 0)
	{
		if (!ft_isdigit(s[i++]))
			exit_func(m, 1);
	}
}
