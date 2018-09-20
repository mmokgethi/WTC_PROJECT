/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smoothstep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:37:42 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:37:46 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_smoothstep(double edge1, double edge2, double x)
{
	x = ft_clamp((x - edge1) / (edge2 - edge1), 0.0, 1.0);
	return (x * x * (3 - 2 * x));
}
