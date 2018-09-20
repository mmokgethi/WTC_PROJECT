/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 12:24:06 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/08/20 09:48:34 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while ((i < n) && (s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
		i++;
	if (n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
