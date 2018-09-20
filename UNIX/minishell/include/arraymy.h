/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arraymy.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:58:16 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/15 10:16:30 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYMY_H
# define ARRAYMY_H

char	**my_array_from_array(char **arr);
char	**my_split_string(char *str, char *separators, int quotes_mode);
char	**my_add_to_array(char *str, char **arr);
void	my_print_array(char **arr);
int		my_free_array(char **arr);
int		my_array_length(char **arr);
char	**my_remove_from_array(int rem, char **arr);

#endif
