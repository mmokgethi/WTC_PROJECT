/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 10:22:38 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/17 10:50:21 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *s2;

	s2 = (char *)s + ft_strlen(s);
	while (*s2 != c)
	{
		if (s2 == s)
		{
			return (NULL);
		}
		s2--;
	}
	return (s2);
}
