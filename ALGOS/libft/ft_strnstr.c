/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 12:43:10 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/17 10:49:48 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litle, size_t len)
{
	size_t		ln;

	if (*litle == '\0')
		return ((char *)big);
	ln = ft_strlen(litle);
	while (*big != '\0' && len-- >= ln)
	{
		if (*big == *litle && ft_memcmp(big, litle, ln) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
