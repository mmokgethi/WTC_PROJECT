/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:54:43 by mmokgeth          #+#    #+#             */
/*   Updated: 2018/09/14 15:54:45 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void		ft_bzero(void *s, size_t n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int	    	ft_puts(char *s);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memalloc(size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_cat(int fd);
size_t		ft_strlen(char *s);
char		*ft_strdup(const char *src);
char		*ft_strnew(size_t size);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);

#endif
