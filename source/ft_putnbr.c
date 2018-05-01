/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 01:37:41 by obamzuro          #+#    #+#             */
/*   Updated: 2018/05/01 12:35:50 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putnbr_common(intmax_t n, char base, char top)
{
	intmax_t	j;
	intmax_t	dop;
	int			a;
	char		*baseline;

	if (top)
		baseline = "0123456789ABCDEF";
	else
		baseline = "0123456789abcdef";
	j = 1;
	dop = n;
	while (dop / base)
	{
		j *= base;
		dop /= base;
	}
	while (j)
	{
		a = n / j % base;
		a = a > 0 ? baseline[a] : baseline[-a];
		pf_write(a);
		j /= base;
	}
}

void		ft_uputnbr_common(uintmax_t n, char base, char top)
{
	uintmax_t	j;
	uintmax_t	dop;
	int			a;
	char		*baseline;

	if (top)
		baseline = "0123456789ABCDEF";
	else
		baseline = "0123456789abcdef";
	j = 1;
	dop = n;
	while (dop / base)
	{
		j *= base;
		dop /= base;
	}
	while (j)
	{
		a = n / j % base;
		a = baseline[a];
		pf_write(a);
		j /= base;
	}
}
