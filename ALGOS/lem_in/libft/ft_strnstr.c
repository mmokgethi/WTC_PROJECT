/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:28:22 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 09:28:25 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (little[k] != '\0')
		k++;
	if (k == 0)
		return (char*)(big);
	while (big[i] != '\0')
	{
		k = 0;
		while (big[i + k] == little[k] && little[k] != '\0')
			k++;
		if (little[k] == '\0')
		{
			if (i + k > len)
				break ;
			return (char*)(big + i);
		}
		i++;
	}
	return (NULL);
}
