/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_xsp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmokgeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 11:16:24 by mmokgeth          #+#    #+#             */
/*   Updated: 2017/09/20 10:07:22 by mmokgeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		ft_printf_s(t_f *ftoken, char **fmt, va_list ap, union u_var f)
{
	(*fmt)++;
	if (ftoken->l)
		ftoken->cur_len = ft_putwstr(va_arg(ap, wchar_t*));
	else
	{
		f.s = va_arg(ap, char*);
		if (f.s)
		{
			ftoken->cur_len = ft_strlen(f.s);
			if (ftoken->cur_len < ftoken->mfw && !ftoken->left)
				ftoken->cur_len +=
					ft_putchar_times(ftoken->zero ? '0' : ' ',
							ftoken->mfw - ftoken->cur_len);
			write(1, f.s, ftoken->precision ? ftoken->precision
					: ft_strlen(f.s));
			if (ftoken->precision)
				ftoken->cur_len =
					ftoken->precision + ftoken->mfw - ftoken->cur_len;
		}
		else
			ftoken->cur_len = ft_printf("(null)");
	}
	return (ftoken->cur_len);
}

int		ft_printf_ls(t_f *ftoken, char **fmt, va_list ap, union u_var f)
{
	(*fmt)++;
	f.ws = va_arg(ap, wchar_t*);
	ftoken->cur_len = ft_wstr_len(f.ws);
	if (ftoken->left)
		ft_putwstr(f.ws);
	while (ftoken->cur_len < ftoken->mfw)
	{
		if (ftoken->zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		ftoken->cur_len++;
	}
	if (!ftoken->left)
		ft_putwstr(f.ws);
	return (ftoken->cur_len);
}

int		ft_printf_x(t_f *ftoken, char **fmt, va_list ap, union u_var f)
{
	(*fmt)++;
	if (ftoken->hh)
	{
		f.uc = va_arg(ap, unsigned int);
		ftoken->cur_len = ft_nlen_base(f.uc, 16);
		if (ftoken->cur_len + 2 < ftoken->mfw && !ftoken->left)
			ftoken->cur_len +=
				ft_putchar_times(ftoken->zero ? '0' : ' ',
						ftoken->mfw - ftoken->cur_len);
		if (ftoken->alt && f.uc)
			ftoken->cur_len += ft_printf("0x");
		ft_putstr(ft_uhhdtoa_base(f.uc, 16));
	}
	else
	{
		f.ull = va_arg(ap, unsigned long long);
		ftoken->cur_len = ft_ulld_len_base(f.ull, 16);
		if (ftoken->cur_len < ftoken->mfw && !ftoken->left)
			ftoken->cur_len += ft_putchar_times(ftoken->zero ? '0' : ' ',
					ftoken->mfw - ftoken->cur_len);
		if (ftoken->alt && f.ull)
			ftoken->cur_len += ft_printf("0x");
		ft_putstr(ft_ulldtoa_base(f.ull, 16));
	}
	return (ftoken->cur_len);
}

int		ft_printf_lx(t_f *ft, char **fmt, va_list ap, union u_var f)
{
	(*fmt)++;
	if (ft->hh)
	{
		f.uc = va_arg(ap, unsigned int);
		ft->cur_len = ft_nlen_base(f.uc, 16);
		ft_putstr(ft_uhhdtoa_base_alt(f.uc, 16));
	}
	else
	{
		f.ull = va_arg(ap, unsigned long long);
		ft->cur_len = ft_ulld_len_base(f.ull, 16);
		while ((ft->cur_len < ft->mfw) || ft->cur_len < ft->precision)
		{
			if ((ft->cur_len < ft->precision) ||
					(ft->zero && !ft->left))
				ft_putchar('0');
			else
				ft_putchar(' ');
			ft->cur_len++;
		}
		if (ft->alt && f.ull)
			ft->cur_len += ft_printf("0X");
		ft_putstr(ft_ulldtoa_base_alt(f.ull, 16));
	}
	return (ft->cur_len);
}

int		ft_printf_p(t_f *ftoken, char **fmt, va_list ap, union u_var f)
{
	(*fmt)++;
	f.ld = va_arg(ap, long);
	ftoken->cur_len = ft_lldlen_base(f.ld, 16) + 2;
	if (ftoken->zero)
		ft_putstr("0x");
	if (ftoken->left && !ftoken->zero)
		ft_printf("0x%s", ft_itoa_base(f.ld, 16));
	while (ftoken->cur_len < ftoken->mfw && !ftoken->left)
	{
		if (ftoken->zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		ftoken->cur_len++;
	}
	if (ftoken->zero)
		ft_putstr(ft_itoa_base(f.ld, 16));
	if (!ftoken->left && !ftoken->zero)
		ft_printf("0x%s", ft_itoa_base(f.ld, 16));
	return (ftoken->cur_len);
}
