/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:24:16 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 10:24:51 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringmy.h"

void	my_putstr(char *str)
{
	while (*str != '\0')
	{
		my_putchar(*str);
		str++;
	}
}
