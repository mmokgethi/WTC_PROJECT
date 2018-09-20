/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:00:39 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/12 10:02:41 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "stringmy.h"
#include "minishell1.h"

int		command_cd(char **argv, char ***env)
{
	char		*path;

	if (argv[1] != NULL)
	{
		path = argv[1];
		if (chdir(path) != 0)
			my_puterror("Error: Can't change dir\n");
	}
	else
	{
		if ((path = get_home_dir(*env)) != NULL && chdir(path) != 0)
			my_puterror("Error: Can't change dir\n");
	}
	*env = my_setenv("PWD", path, *env);
	return (1);
}
