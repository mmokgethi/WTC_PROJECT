/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 09:03:06 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/17 10:22:35 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*lnk;

	if (lst)
	{
		lnk = f(lst);
		lnk->next = ft_lstmap(lst->next, f);
		return (lnk);
	}
	return (NULL);
}
