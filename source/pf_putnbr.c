/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:22:37 by obamzuro          #+#    #+#             */
/*   Updated: 2018/05/08 20:27:06 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		pf_putnbr_common(intmax_t n, char base, char top, unsigned char nbr_size)
{
	intmax_t	j;
	int			a;
	char		*baseline;

	if (top)
		baseline = "FEDCBA98765432100123456789ABCDEF";
	else
		baseline = "fedcba98765432100123456789abcdef";
	j = 1;
	while (--nbr_size)
		j *= base;
	while (j)
	{
		a = n / j % base;
		a = baseline[a + 16];
		pf_write(a);
		j /= base;
	}
}

void		pf_uputnbr_common(uintmax_t n, char base, char top, unsigned char unbr_size)
{
	uintmax_t	j;
	int			a;
	char		*baseline;

	if (top)
		baseline = "0123456789ABCDEF";
	else
		baseline = "0123456789abcdef";
	j = 1;
	while (--unbr_size)
		j *= base;
	while (j)
	{
		a = n / j % base;
		a = baseline[a];
		pf_write(a);
		j /= base;
	}
}
