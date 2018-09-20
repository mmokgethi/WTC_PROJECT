/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:42:21 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:45:51 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*news;

	i = -1;
	if (s && f)
	{
		news = malloc(sizeof(char) * ft_strlen(s));
		while (*(s + (++i)) != '\0')
			*(news + i) = f(i, *(s + i));
		return (news);
	}
	return (NULL);
}
