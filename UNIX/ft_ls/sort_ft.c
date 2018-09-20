/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 13:48:55 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/08/18 14:42:51 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_alpha(t_elem *elem1, t_elem *elem2)
{
	return (ft_strcmp(elem1->name, elem2->name));
}

int		cmp_time(t_elem *elem1, t_elem *elem2)
{
	return (elem1->date < elem2->date);
}
