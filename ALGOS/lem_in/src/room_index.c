/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:51:47 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:51:50 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int	room_index(t_map *m, char *room_name, int start)
{
	int index;

	index = (start) ? -1 : 0;
	while (m->rooms[++index] && index < m->q_rooms)
	{
		if (ft_strcmp(m->rooms[index], room_name) == 0)
			return (index);
	}
	return (index);
}
