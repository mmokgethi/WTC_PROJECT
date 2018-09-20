/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ulld.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:15:27 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/20 09:51:44 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_putulld_r(unsigned long long ulld)
{
	if (ulld)
		ft_putulld_r(ulld / 10);
	if (ulld)
		ft_putchar((ulld % 10) + '0');
}

void	ft_putulld(unsigned long long ulld)
{
	if (ulld == 0)
		ft_putchar('0');
	else
		ft_putulld_r(ulld);
}

void	ft_putuld_r(unsigned long uld)
{
	if (uld)
		ft_putuld_r(uld / 10);
	if (uld)
		ft_putchar((uld % 10) + '0');
}

void	ft_putuld(unsigned long ld)
{
	if (ld == 0)
		ft_putchar('0');
	else
		ft_putuld_r(ld);
}
