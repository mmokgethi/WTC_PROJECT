/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:33:22 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:33:26 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c1;
	const char	*c2;

	c2 = src;
	c1 = dst;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	c2 += len;
	c1 += len;
	while (len--)
		*--c1 = *--c2;
	return (dst);
}
