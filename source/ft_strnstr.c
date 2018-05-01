/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 14:07:16 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/30 22:15:17 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		pf_strnstr(const char *big, const char *little)
{
	while (*big && *little && *big == *little)
	{
		++big;
		++little;
	}
	if (!*little)
		return (1);
	return (0);
}
