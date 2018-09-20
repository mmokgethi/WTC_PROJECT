/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:34:45 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 12:00:42 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringmy.h"

char	*my_strncpy(char *dest, char *src, int n)
{
	int		i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
