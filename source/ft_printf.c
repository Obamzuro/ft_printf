/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:51:20 by obamzuro          #+#    #+#             */
/*   Updated: 2018/05/08 20:23:14 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	read_width(const char **src, va_list *ap)
{
	if (**src == '*')
	{
		++(*src);
		return (va_arg(*ap, int));
	}
	else
		return (ft_positive_atoi(src));
}

static void		fix_conversion(t_special *spec)
{
	if (spec->conversion->ascii == 'D' || spec->conversion->ascii == 'U' ||
			spec->conversion->ascii == 'O')
		spec->size = g_sizes + LONG_INT;
}

static void	print_special(const char **src, va_list *ap, t_buffer *buff)
{
	t_special	special;

	read_flags(src);
	special.width = read_width(src, ap);
	special.precision = read_precision(src, ap);
	special.size = read_size(src);
	special.conversion = read_conversion(src);
	fix_conversion(&special);
	special.conversion->f(&special, ap, buff);
}

int			ft_printf(const char *src, ...)
{
	va_list		ap;
	t_buffer	buff;

	buff.cur = 0;
	buff.line = malloc(PRINTF_BUFF_SIZE);
	va_start(ap, src);
	fill_sizes();
	fill_convs();
	fill_flags();
	while (*src)
	{
		if (*src == '%')
		{
			++src;
			print_special(&src, &ap, &buff);
			continue;
		}
		pf_write(*src, &buff);
		++src;
	}
	va_end(ap);
	pf_write_tail(&buff);
	free(buff.line);
	return (buff.ret * PRINTF_BUFF_SIZE + buff.cur);
}

size_t		ft_snprintf(char *line, size_t cur, const char *src, ...)
{
	va_list		ap;
	t_buffer	buff;

	/* FIXME only 1 filling pls */
	buff.line = line;
	buff.cur = cur;
	va_start(ap, src);
	fill_sizes();
	fill_convs();
	fill_flags();
	while (*src)
	{
		if (*src == '%')
		{
			++src;
			print_special(&src, &ap, &buff);
			continue;
		}
		pf_write(*src, &buff);
		++src;
	}
	va_end(ap);
	return (buff.cur);
}
