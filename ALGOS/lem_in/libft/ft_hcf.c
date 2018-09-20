/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hcf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:55:19 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:55:23 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_hcf(unsigned int a, unsigned int b)
{
	unsigned int hcf;
	unsigned int temp;

	hcf = 1;
	temp = 1;
	while (temp <= a && temp <= b)
	{
		if (a % temp == 0 && b % temp == 0)
			hcf = temp;
		temp++;
	}
	return (hcf);
}
