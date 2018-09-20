/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 08:18:26 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/17 10:35:15 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	lngnbr;

	lngnbr = (long)n;
	if (lngnbr < 0)
	{
		ft_putchar('-');
		lngnbr *= -1;
	}
	if (lngnbr >= 10)
	{
		ft_putnbr(lngnbr / 10);
		ft_putnbr(lngnbr % 10);
	}
	else
	{
		ft_putchar(lngnbr + '0');
	}
}
