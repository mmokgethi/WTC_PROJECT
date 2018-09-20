/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:33:25 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 10:34:04 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringmy.h"

char	*my_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		dest_len;

	dest_len = my_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
