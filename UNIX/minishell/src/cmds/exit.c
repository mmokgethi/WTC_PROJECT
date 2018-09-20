/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:03:44 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 10:04:02 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "arraymy.h"
#include "stringmy.h"
#include "minishell1.h"

int		command_exit(char **argv, char **env)
{
	int		status;

	status = 0;
	if (argv[1] != NULL)
		status = my_getnbr(argv[1]);
	my_free_array(argv);
	my_free_array(env);
	exit(status);
	return (1);
}
