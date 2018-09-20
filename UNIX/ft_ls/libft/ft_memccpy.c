/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:32:00 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:32:04 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (dst && src && c && n)
	{
		while (i < n)
		{
			*((char *)dst + i) = *((char *)src + i);
			if (*((char *)src + i) == (char)c)
			{
				return ((char *)dst + i + 1);
			}
			i++;
		}
	}
	return (NULL);
}
