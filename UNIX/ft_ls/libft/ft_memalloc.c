/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:31:48 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:31:53 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;

	i = -1;
	mem = malloc(sizeof(size_t) * size);
	if (!mem)
		return (NULL);
	while (++i < size)
		*((unsigned char *)mem + i) = '\0';
	return (mem);
}
