/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:55:03 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:55:07 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(const char *str, int c)
{
	int num;
	int i;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			while (str[i] != c)
				i++;
			num++;
		}
		i++;
	}
	return (num);
}
