/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:50:56 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:50:59 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	links(t_map *m, char *line)
{
	if (m->started == 2)
		m->started = 3;
	if (m->started != 3)
		exit_func(m, 1);
	m->links = join_str(m->links, line, 0);
}
