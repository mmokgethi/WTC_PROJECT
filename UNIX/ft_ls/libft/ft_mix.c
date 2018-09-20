/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:33:49 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:33:53 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_mix(double x, double y, double a)
{
	return (x * (1 - a) + y * a);
}
