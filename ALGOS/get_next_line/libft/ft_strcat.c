/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 16:18:27 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/06/10 10:09:22 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int len1;
	int i;

	len1 = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i + len1] = s2[i];
		i++;
	}
	s1[len1 + i] = '\0';
	return (s1);
}
