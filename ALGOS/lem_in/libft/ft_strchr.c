/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:04:53 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 09:04:57 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	if (a == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (char*)(s + i);
	}
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return (char*)(s + i);
		i++;
	}
	return (NULL);
}
