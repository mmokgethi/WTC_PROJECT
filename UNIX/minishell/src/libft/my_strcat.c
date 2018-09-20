/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:25:01 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 10:25:49 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringmy.h"

char	*my_strcat(char *dest, char *src)
{
	int		i;
	int		dest_len;

	dest_len = my_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
