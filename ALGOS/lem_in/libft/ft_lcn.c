/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:57:25 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:57:29 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;

	lcm = (a * b) / ft_hcf(a, b);
	return (lcm);
}
