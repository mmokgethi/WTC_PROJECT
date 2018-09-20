/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 08:50:31 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/07/04 08:50:35 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char	*join_str(char *s1, char *s2, int clean)
{
	char *new_s;

	new_s = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1[0] == 0)
		return (s2);
	ft_strcat(new_s, s1);
	ft_strcat(new_s, "\n");
	ft_strcat(new_s, s2);
	ft_strdel(&s1);
	(clean) ? ft_strdel(&s2) : 0;
	return (new_s);
}
