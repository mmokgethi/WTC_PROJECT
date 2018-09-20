/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 09:50:23 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 09:50:45 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "stringmy.h"

void	my_print_array(char **arr)
{
	int		i;

	i = 0;
	while (arr[i] != NULL)
	{
		my_putstr(arr[i]);
		my_putchar('\n');
		i = i + 1;
	}
}
