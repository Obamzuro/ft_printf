/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:11:53 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/12 04:02:46 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	check_d()
{
//	printf("%d\n", ft_nbr_size(0xFFFFFFFF0));
	ft_printf("%0+6hd\n", (short)-3);
	printf("%0+6hd\n", (short)-3);
	ft_printf("%0+6.0hd\n", (short)-3);
	printf("%0+6.0hd\n", (short)-3);
	ft_printf("%0+6.1hd\n", (short)-3);
	printf("%0+6.1hd\n", (short)-3);
	ft_printf("%0+6.2hd\n", (short)-3);
	printf("%0+6.2hd\n", (short)-3);
	ft_printf("%0+6.3hd\n", (short)-3);
	printf("%0+6.3hd\n", (short)-3);
	ft_printf("%0+6.4hd\n", (short)-3);
	printf("%0+6.4hd\n", (short)-3);
	ft_printf("%0+6.5hd\n", (short)-3);
	printf("%0+6.5hd\n", (short)-3);
	ft_printf("%0+6.6hd\n", (short)-3);
	printf("%0+6.6hd\n", (short)-3);
	ft_printf("%0+6.7hd\n", (short)-3);
	printf("%0+6.7hd\n", (short)-3);
	printf("=====1=======\n");
	ft_printf("%+6hd\n", (short)-3);
	printf("%+6hd\n", (short)-3);
	ft_printf("%+6.0hd\n", (short)-3);
	printf("%+6.0hd\n", (short)-3);
	ft_printf("%+6.1hd\n", (short)-3);
	printf("%+6.1hd\n", (short)-3);
	ft_printf("%+6.2hd\n", (short)-3);
	printf("%+6.2hd\n", (short)-3);
	ft_printf("%+6.3hd\n", (short)-3);
	printf("%+6.3hd\n", (short)-3);
	ft_printf("%+6.4hd\n", (short)-3);
	printf("%+6.4hd\n", (short)-3);
	ft_printf("%+6.5hd\n", (short)-3);
	printf("%+6.5hd\n", (short)-3);
	ft_printf("%+6.6hd\n", (short)-3);
	printf("%+6.6hd\n", (short)-3);
	ft_printf("%+6.7hd\n", (short)-3);
	printf("%+6.7hd\n", (short)-3);
	printf("=====2=======\n");
	ft_printf("%6hd\n", (short)-3);
	printf("%6hd\n", (short)-3);
	ft_printf("%6.0hd\n", (short)-3);
	printf("%6.0hd\n", (short)-3);
	ft_printf("%6.1hd\n", (short)-3);
	printf("%6.1hd\n", (short)-3);
	ft_printf("%6.2hd\n", (short)-3);
	printf("%6.2hd\n", (short)-3);
	ft_printf("%6.3hd\n", (short)-3);
	printf("%6.3hd\n", (short)-3);
	ft_printf("%6.4hd\n", (short)-3);
	printf("%6.4hd\n", (short)-3);
	ft_printf("%6.5hd\n", (short)-3);
	printf("%6.5hd\n", (short)-3);
	ft_printf("%6.6hd\n", (short)-3);
	printf("%6.6hd\n", (short)-3);
	ft_printf("%6.7hd\n", (short)-3);
	printf("%6.7hd\n", (short)-3);
	printf("=====3=======\n");
	ft_printf("% 6hd\n", (short)3);
	printf("% 6hd\n", (short)3);
	ft_printf("%6.0hd\n", (short)3);
	printf("% 6.0hd\n", (short)3);
	ft_printf("% 6.1hd\n", (short)3);
	printf("% 6.1hd\n", (short)3);
	ft_printf("% 6.2hd\n", (short)3);
	printf("% 6.2hd\n", (short)3);
	ft_printf("% 6.3hd\n", (short)3);
	printf("% 6.3hd\n", (short)3);
	ft_printf("% 6.4hd\n", (short)3);
	printf("% 6.4hd\n", (short)3);
	ft_printf("% 6.5hd\n", (short)3);
	printf("% 6.5hd\n", (short)3);
	ft_printf("% 6.6hd\n", (short)3);
	printf("% 6.6hd\n", (short)3);
	ft_printf("% 6.7hd\n", (short)3);
	printf("% 6.7hd\n", (short)3);
	printf("=====4=======\n");
	ft_printf("%- 6hd\n", (short)3);
	printf("%- 6hd\n", (short)3);
	ft_printf("%- 6.0hd\n", (short)3);
	printf("%- 6.0hd\n", (short)3);
	ft_printf("%- 6.1hd\n", (short)3);
	printf("%- 6.1hd\n", (short)3);
	ft_printf("%- 6.2hd\n", (short)3);
	printf("%- 6.2hd\n", (short)3);
	ft_printf("%- 6.3hd\n", (short)3);
	printf("%- 6.3hd\n", (short)3);
	ft_printf("%- 6.4hd\n", (short)3);
	printf("%- 6.4hd\n", (short)3);
	ft_printf("%- 6.5hd\n", (short)3);
	printf("%- 6.5hd\n", (short)3);
	ft_printf("%- 6.6hd\n", (short)3);
	printf("%- 6.6hd\n", (short)3);
	ft_printf("%- 6.7hd\n", (short)3);
	printf("%- 6.7hd\n", (short)3);
	printf("=====5=======\n");
	ft_printf("%-6hd\n", (short)-3);
	printf("%-6hd\n", (short)-3);
	ft_printf("%-6.0hd\n", (short)-3);
	printf("%-6.0hd\n", (short)-3);
	ft_printf("%-6.1hd\n", (short)-3);
	printf("%-6.1hd\n", (short)-3);
	ft_printf("%-6.2hd\n", (short)-3);
	printf("%-6.2hd\n", (short)-3);
	ft_printf("%-6.3hd\n", (short)-3);
	printf("%-6.3hd\n", (short)-3);
	ft_printf("%-6.4hd\n", (short)-3);
	printf("%-6.4hd\n", (short)-3);
	ft_printf("%-6.5hd\n", (short)-3);
	printf("%-6.5hd\n", (short)-3);
	ft_printf("%-6.6hd\n", (short)-3);
	printf("%-6.6hd\n", (short)-3);
	ft_printf("%-6.7hd\n", (short)-3);
	printf("%-6.7hd\n", (short)-3);
	printf("=====6=======\n");
	ft_printf("%0-+6hd\n", (short)-3);
	printf("%0-+6hd\n", (short)-3);
	ft_printf("%0-+6.0hd\n", (short)-3);
	printf("%0-+6.0hd\n", (short)-3);
	ft_printf("%0-+6.1hd\n", (short)-3);
	printf("%0-+6.1hd\n", (short)-3);
	ft_printf("%0-+6.2hd\n", (short)-3);
	printf("%0-+6.2hd\n", (short)-3);
	ft_printf("%0-+6.3hd\n", (short)-3);
	printf("%0-+6.3hd\n", (short)-3);
	ft_printf("%0-+6.4hd\n", (short)-3);
	printf("%0-+6.4hd\n", (short)-3);
	ft_printf("%0-+6.5hd\n", (short)-3);
	printf("%0-+6.5hd\n", (short)-3);
	ft_printf("%0-+6.6hd\n", (short)-3);
	printf("%0-+6.6hd\n", (short)-3);
	ft_printf("%0-+6.7hd\n", (short)-3);
	printf("%0-+6.7hd\n", (short)-3);
	printf("============\n");
	ft_printf("%hd\n", 32767);
	printf("%hd\n", 32767);
	ft_printf("%hd\n", 32768);
	printf("%hd\n", 32768);
	printf("============\n");
	ft_printf("%hd\n", -65535);
	printf("%hd\n", -65535);
	ft_printf("%hd\n", 65535);
	printf("%hd\n", 65535);
	ft_printf("%hd\n", 3);
	printf("%hd\n", 3);
}

int main(void)
{
	check_d();
}
