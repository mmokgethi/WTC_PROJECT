/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:50:14 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:50:20 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	vecadd(t_vec3 *a, t_vec3 *b)
{
	t_vec3	v;

	v.x = a->x + b->x;
	v.y = a->y + b->y;
	v.z = a->z + b->z;
	return (v);
}

t_vec3	vecprod(t_vec3 *a, t_vec3 *b)
{
	t_vec3	v;

	v.x = a->x * b->x;
	v.y = a->y * b->y;
	v.z = a->z * b->z;
	return (v);
}

t_vec3	vecopx(t_vec3 *a, double x)
{
	t_vec3	v;

	v.x = a->x * x;
	v.y = a->y * x;
	v.z = a->z * x;
	return (v);
}

double	vecdistance(t_vec3 *a, t_vec3 *b)
{
	double	distance;

	distance = sqrt((a->x - b->x) * (a->x - b->x) + \
		(a->y - b->y) * (a->y - b->y) + (a->z - b->z) * (a->z - b->z));
	return (distance);
}
