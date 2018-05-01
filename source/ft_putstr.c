/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:37:42 by obamzuro          #+#    #+#             */
/*   Updated: 2018/05/01 12:37:45 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	count_bytes(int a)
{
	if (a <= 0x7F)
		return (1);
	if (a <= 0x7FF)
		return (2);
	if (a <= 0xFFFF)
		return (3);
	return (4);
}

void		ft_putstr(const char *s, size_t size)
{
	size_t i;

	if (!s)
		return ;
	i = 0;
	while (*s && i < size)
	{
		pf_write(*s);
		++s;
		++i;
	}
}

size_t		ft_wputstr(const wchar_t *s)
{
	size_t i;
	size_t res;

	if (!s)
		return (0);
	res = 0;
	while (*s)
	{
		ft_putchar(*s);
		res += count_bytes(*s);
		++s;
	}
	return (res);
}
