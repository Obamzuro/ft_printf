/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:51:20 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/12 03:06:18 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_size_corr sizes[AM_SIZES];
t_conv_corr convs[AM_CONVS];

void	fill_convs(void)
{
	convs[0].ascii = 'd';
	convs[0].f = print_decimal;
}

void	fill_sizes(void)
{
	sizes[INTMAX_T].size = INTMAX_T;
	sizes[INTMAX_T].spec = "j";
	sizes[SIZE_T].size = SIZE_T;
	sizes[SIZE_T].spec = "z";
	sizes[LONG_LONG_INT].size = LONG_LONG_INT;
	sizes[LONG_LONG_INT].spec = "ll";
	sizes[LONG_INT].size = LONG_INT;
	sizes[LONG_INT].spec = "l";
	sizes[SHORT_INT].size = SHORT_INT;
	sizes[SHORT_INT].spec = "h";
	sizes[CHAR].size = CHAR;
	sizes[CHAR].spec = "hh";
	sizes[INT].size = INT;
	sizes[INT].spec = "";
}

void	fill_flags(t_flags_corr *flag)
{
	flag[minus].flag = minus;
	flag[minus].ascii = '-';
	flag[minus].exist = 0;
	flag[plus].flag = plus;
	flag[plus].ascii = '+';
	flag[plus].exist = 0;
	flag[space].flag = space;
	flag[space].ascii = ' ';
	flag[space].exist = 0;
	flag[sharp].flag = sharp;
	flag[sharp].ascii = '#';
	flag[sharp].exist = 0;
	flag[zero].flag = zero;
	flag[zero].ascii = '0';
	flag[zero].exist = 0;
}

void	read_flags(const char **src, t_flags_corr *flag)
{
	size_t i;

	fill_flags(flag);
	while (1)
	{
		i = -1;
		while (++i < AM_FLAGS)
			if (flag[i].ascii == **src)
			{
				flag[i].exist = 1;
				break ;
			}
		if (i == 5)
			break;
		++(*src);
	}
}

int		ft_atoi_pf(const char **src)
{
	/* FIXME */
	long int	t;

	if (!**src || **src < '0' || **src > '9')
		return (0);
	t = **src - '0';
	while ((*++(*src) && **src >= '0') && **src <= '9' && t >= 0)
		t = t * 10 + (**src - 48);
	return (t);
}

void	read_width(const char **src, int *width)
{
	*width = ft_atoi_pf(src);
}

void	read_precision(const char **src, ssize_t *precision)
{
	if (**src == '.')
	{
		++(*src);
		*precision = ft_atoi_pf(src);
	}
	else
		*precision = -1;
}

void	read_size(const char **src, t_size_corr **size)
{
	size_t i;

	/* FIXME */
	i = 0;
	while (i < AM_SIZES)
	{
		if (ft_strnstr(*src, sizes[i].spec, ft_strlen(sizes[i].spec)))
		{
			*size = sizes + i;
			*src += ft_strlen(sizes[i].spec);
			return ;
		}
		++i;
	}
	*size = sizes + INT;
	return ;
}

void	read_conversion(const char **src, t_conv_corr **conversion)
{
	size_t i;

	i = 0;
	while (i < AM_CONVS)
	{
		if (**src == convs[i].ascii)
		{
			*conversion = convs + i;
			++(*src);
			return ;
		}
		++i;
	}
	/* FIXME */
	/* TBC   */
}

void	print_special(const char **src, va_list *ap)
{
	t_special special;

	read_flags(src, special.flag);
	read_width(src, &(special.width));
	read_precision(src, &(special.precision));
	read_size(src, &special.size);
	read_conversion(src, &special.conversion);
	(special.conversion)->f(&special, ap);
}

int		ft_printf(const char *src, ...)
{
	va_list ap;
	va_start(ap, src);
	fill_sizes();
	fill_convs();
	while (*src)
	{
		if (*src == '%')
		{
			++src;
			print_special(&src, &ap);
			continue;
		}
		write(1, src, 1);
		src++;
	}
	return (1);
}
