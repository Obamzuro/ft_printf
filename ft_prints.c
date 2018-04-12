/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 23:00:51 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/12 04:18:25 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		get_decimal(t_special *spec, va_list *ap, intmax_t *n)
{
	t_size size;

	size = spec->size->size;
	if (size == LONG_LONG_INT)
		*n = va_arg(*ap, long long);
	else if (size == LONG_INT)
		*n = va_arg(*ap, long);
	else if (size == INTMAX_T)
		*n = va_arg(*ap, intmax_t);
	else if (size == SIZE_T)
		*n = va_arg(*ap, size_t);
	else
		*n = va_arg(*ap, int);
	if (size == SHORT_INT)
		*n = (short)*n;
	else if (size == CHAR)
		*n = (char)*n;
}

void		print_nsymb(size_t diff, char symb)
{
	size_t		i;

	i = 0;
	while (i < diff)
	{
		write(1, &symb, 1);
		i++;
	}
}

void		print_sign(t_special *spec, intmax_t n)
{
	if (n < 0)
		write(1, "-", 1);
	else if (spec->flag[plus].exist)
		write(1, "+", 1);
	else if (spec->flag[space].exist)
		write(1, " ", 1);
}

void		stabilize_width(t_special *spec, intmax_t n)
{
	ssize_t		nsize;
	size_t		i;
	size_t		diffprec;
	size_t		diffwidth;

	i = 0;
	diffprec = 0;
	diffwidth = 0;
	nsize = ft_nbr_size(n);
	if (spec->precision > nsize)
		diffprec = spec->precision - nsize;
	nsize += diffprec;
	if (spec->flag[plus].exist || n < 0 || spec->flag[space].exist)
		++nsize;
	if (spec->width > nsize)
		diffwidth = spec->width - nsize;
	if (spec->flag[minus].exist || (spec->flag[zero].exist && spec->precision == -1 && (spec->flag[plus].exist || n < 0 || spec->flag[space].exist)))
		print_sign(spec, n);
	if (!spec->flag[minus].exist && spec->flag[zero].exist && spec->precision == -1)
		print_nsymb(diffwidth, '0');
	else if (!spec->flag[minus].exist)
		print_nsymb(diffwidth, ' ');
	if (!spec->flag[minus].exist && (!spec->flag[zero].exist || (spec->precision != -1 && (spec->flag[plus].exist || n < 0 || spec->flag[space].exist))))
		print_sign(spec, n);
	print_nsymb(diffprec, '0');
}

void		print_decimal(t_special *spec, va_list *ap)
{
	intmax_t	n;
	size_t		i;

	get_decimal(spec, ap, &n);
	stabilize_width(spec, n);

	if (spec->size->size == SHORT_INT)
		/* TESTME */
		ft_putnbr_common(n, 32768, "32768");
	else
		ft_putnbr(n);
}
