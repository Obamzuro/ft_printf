/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 01:39:31 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/30 18:38:05 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s, size_t size)
{
	if (!s)
		return ;
	ft_putstr_fd(s, 1, size);
}

size_t	ft_wputstr(const wchar_t *s)
{
	if (!s)
		return (0);
	return (ft_wputstr_fd(s, 1));
}
