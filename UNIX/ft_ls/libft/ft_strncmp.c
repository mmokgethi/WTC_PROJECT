/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:46:23 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:46:27 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	nb;

	nb = 0;
	if (!n)
		return (0);
	while (nb < (n - 1) && *s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
		nb++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
