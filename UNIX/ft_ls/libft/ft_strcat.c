/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:38:12 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:38:18 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(s1);
	while ((s1[i] = s2[j]))
	{
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
