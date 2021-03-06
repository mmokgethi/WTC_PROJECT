/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:31:29 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/07/09 14:31:40 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *array, int len)
{
	int		i;
	int		max;

	i = 0;
	max = array[i];
	while (i < len)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}
	return (max);
}
