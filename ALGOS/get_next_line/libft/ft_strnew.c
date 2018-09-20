/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 08:47:32 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/06/10 10:32:22 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *sz;

	if (!(sz = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(sz, '\0', size + 1);
	return (sz);
}
