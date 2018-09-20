/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_toa_base_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:15:00 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/20 09:51:03 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char		*ft_uldtoa_base_alt(unsigned long value, int base)
{
	static char			*hex = "0123456789ABCDEF";
	char				*result;
	unsigned long long	n;
	int					len;

	n = value;
	if (value == 0)
		return ("0");
	len = ft_uld_len_base(n, base);
	result = (char*)malloc(len + 1);
	result[len--] = '\0';
	while (n)
	{
		result[len--] = hex[n % base];
		n /= base;
	}
	return (result);
}

char		*ft_uhhdtoa_base_alt(unsigned char value, int base)
{
	static char			*hex = "0123456789ABCDEF";
	char				*result;
	long long			n;
	int					len;

	n = value;
	if (value == 0)
		return ("0");
	len = ft_nlen_base(n, base);
	result = (char*)malloc(len + 1);
	result[len--] = '\0';
	while (n)
	{
		result[len--] = hex[n % base];
		n /= base;
	}
	return (result);
}

char		*ft_udtoa_base_alt(long value, int base)
{
	static char			*hex = "0123456789ABCDEF";
	char				*result;
	long				n;
	int					len;

	n = value;
	if (value == 0)
		return ("0");
	len = ft_ud_len_base(n, base);
	result = (char*)malloc(len + 1);
	result[len--] = '\0';
	while (n)
	{
		result[len--] = hex[n % base];
		n /= base;
	}
	return (result);
}

char		*ft_udtoa_base(long value, int base)
{
	static char			*hex = "0123456789abcdef";
	char				*result;
	long				n;
	int					len;

	n = value;
	if (value == 0)
		return ("0");
	len = ft_ud_len_base(n, base);
	result = (char*)malloc(len + 1);
	result[len--] = '\0';
	while (n)
	{
		result[len--] = hex[n % base];
		n /= base;
	}
	return (result);
}

char		*ft_itoa_base(long value, int base)
{
	static char			*hex = "0123456789abcdef";
	char				*result;
	long				n;
	int					len;

	n = value;
	if (value == 0)
		return ("0");
	if (value < 0)
		n *= -1;
	len = ft_nlen_base(n, base);
	if (value < 0 && base == 10)
		len++;
	result = (char*)malloc(len + 1);
	result[len--] = '\0';
	while (n)
	{
		result[len--] = hex[n % base];
		n /= base;
	}
	if (value < 0 && base == 10)
		result[0] = '-';
	return (result);
}
