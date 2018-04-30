/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:51:20 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/15 23:53:23 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		fix_conversion(t_special *spec)
{
	if (spec->conversion->ascii == 'D' || spec->conversion->ascii == 'U' ||
			spec->conversion->ascii == 'O')
		spec->size = g_sizes + LONG_INT;
}

static void	print_special(const char **src, va_list *ap, int *res)
{
	t_special	special;
	char		convret;

	read_flags(src);
	special.width = ft_positive_atoi(src);
	special.precision = read_precision(src);
	special.size = read_size(src);
	special.conversion = read_conversion(src);
	fix_conversion(&special);
	special.conversion->f(&special, ap, res);
}

int			ft_printf(const char *src, ...)
{
	va_list	ap;
	int		res;

	va_start(ap, src);
	fill_sizes();
	fill_convs();
	fill_flags();
	res = 0;
	while (*src)
	{
		if (*src == '%')
		{
			++src;
			print_special(&src, &ap, &res);
			continue;
		}
		write(1, src, 1);
		++src;
		++res;
	}
	va_end(ap);
	return (res);
}
