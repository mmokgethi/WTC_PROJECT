/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:28:29 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 10:33:15 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "stringmy.h"

int		my_strlen(char *str)
{
	int		len;
	char	*buf;

	if (str == NULL)
		return (0);
	buf = str;
	len = 0;
	while (*buf != '\0')
	{
		len++;
		buf++;
	}
	return (len);
}
