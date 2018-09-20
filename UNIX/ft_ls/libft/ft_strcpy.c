/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:40:12 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:41:05 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(src);
	index = -1;
	while (++index <= length && src[index] != '\0')
		*(dst + index) = *(src + index)
				;
	dst[index] = '\0';
	return (dst);
}
