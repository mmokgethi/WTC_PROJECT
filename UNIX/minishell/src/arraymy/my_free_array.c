/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 09:49:31 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 09:50:14 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "arraymy.h"

int		my_free_array(char **arr)
{
	int		i;

	if (arr == NULL)
		return (1);
	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i = i + 1;
	}
	if (arr != NULL)
		free(arr);
	return (1);
}
