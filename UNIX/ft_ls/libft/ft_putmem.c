/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:36:06 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:36:11 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmem(void *mem, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		ft_putchar((*(unsigned char *)mem) + i);
}
