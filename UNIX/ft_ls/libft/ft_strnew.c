/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:46:49 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:46:53 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = -1;
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	while (++i < size)
		*(new + i) = '\0';
	return (new);
}
