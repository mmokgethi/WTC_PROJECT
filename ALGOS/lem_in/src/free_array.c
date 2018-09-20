/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:50:22 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:50:25 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	free_array(char **array, t_map *m, int error)
{
	int i;

	i = 0;
	while (array[i])
		(array[i]) ? free(array[i++]) : 0;
	free(array);
	if (error)
		exit_func(m, 1);
	array = NULL;
}
