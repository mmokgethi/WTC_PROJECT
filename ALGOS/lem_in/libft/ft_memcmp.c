/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:01:05 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 09:01:08 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_n;
	unsigned char	*s2_n;

	i = 0;
	s1_n = (unsigned char*)s1;
	s2_n = (unsigned char*)s2;
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (n-- > 0)
	{
		if (s1_n[i] != s2_n[i])
			return (s1_n[i] - s2_n[i]);
		i++;
	}
	return (0);
}
