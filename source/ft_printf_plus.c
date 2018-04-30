/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 09:40:43 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/15 21:31:32 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_positive_atoi(const char **src)
{
	long int	t;

	if (**src < '0' || **src > '9')
		return (0);
	t = **src - '0';
	while ((*++(*src) && **src >= '0') && **src <= '9' && t >= 0)
		t = t * 10 + (**src - 48);
	return (t);
}

void		read_flags(const char **src)
{
	size_t i;

	reset_flags();
	while (1)
	{
		i = 0;
		while (i < AM_FLAGS)
		{
			if (g_flags[i].ascii == **src)
			{
				g_flags[i].exist = 1;
				break ;
			}
			++i;
		}
		if (i == AM_FLAGS)
			break ;
		++(*src);
	}
}

ssize_t		read_precision(const char **src)
{
	if (**src == '.')
	{
		++(*src);
		return (ft_positive_atoi(src));
	}
	else
		return (-1);
}

t_size_corr	*read_size(const char **src)
{
	size_t	i;

	i = 0;
	while (i < AM_SIZES)
	{
		if (ft_strnstr(*src, g_sizes[i].str, ft_strlen(g_sizes[i].str)))
		{
			*src += ft_strlen(g_sizes[i].str);
			return (g_sizes + i);
		}
		++i;
	}
	return (g_sizes + INT);
}

t_conv_corr	*read_conversion(const char **src)
{
	size_t	i;

	i = 0;
	while (i < AM_CONVS)
	{
		if (**src == g_convs[i].ascii)
		{
			++(*src);
			return (g_convs + i);
		}
		++i;
	}
	return (0);
}
