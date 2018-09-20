/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:00:28 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 09:00:31 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	a;

	a = c;
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	while (n-- > 0)
	{
		if ((*dest++ = *source++) == a)
			return (void*)(dest);
	}
	return (NULL);
}
