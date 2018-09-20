/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_wchar_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:16:12 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/20 09:52:24 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		ft_wchar_len(wchar_t wc)
{
	unsigned int ud;

	ud = (unsigned int)wc;
	if (ud <= 127)
		return (1);
	else if (ud <= 2047)
		return (2);
	else if (ud <= 65535)
		return (3);
	else
		return (4);
}

int		ft_wstr_len(wchar_t *ws)
{
	int len;

	len = 0;
	if (!ws)
		return (ft_strlen("(null)"));
	while (*ws)
	{
		len += ft_wchar_len(*ws);
		ws++;
	}
	return (len);
}

int		ft_putwstr(wchar_t *ws)
{
	int len;

	if (!ws)
		return (ft_printf("(null)"));
	len = 0;
	while (*ws)
	{
		len += ft_putwchar(*ws);
		ws++;
	}
	return (len);
}
