/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:11:53 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/13 21:03:39 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <locale.h>

//void	test(char *line)
//{
//	int fd;
//	int fd2;
//	int fd3;
//	int a;
//	int diff_file_size;
//	int i;
//
//	i = 0;
//	fd = open("libc", O_CREAT | O_RDWR | O_TRUNC, 0755);
//	fd2 = open("mine", O_CREAT | O_RDWR | O_TRUNC, 0755);
//
//}

void	check_d()
{
//	ft_printf("%0+6hd\n", (short)-3);
//	printf("%0+6hd\n", (short)-3);
//	ft_printf("%0+6.0hd\n", (short)-3);
//	printf("%0+6.0hd\n", (short)-3);
//	ft_printf("%0+6.1hd\n", (short)-3);
//	printf("%0+6.1hd\n", (short)-3);
//	ft_printf("%0+6.2hd\n", (short)-3);
//	printf("%0+6.2hd\n", (short)-3);
//	ft_printf("%0+6.3hd\n", (short)-3);
//	printf("%0+6.3hd\n", (short)-3);
//	ft_printf("%0+6.4hd\n", (short)-3);
//	printf("%0+6.4hd\n", (short)-3);
//	ft_printf("%0+6.5hd\n", (short)-3);
//	printf("%0+6.5hd\n", (short)-3);
//	ft_printf("%0+6.6hd\n", (short)-3);
//	printf("%0+6.6hd\n", (short)-3);
//	ft_printf("%0+6.7hd\n", (short)-3);
//	printf("%0+6.7hd\n", (short)-3);
//	printf("=====1=======\n");
//	ft_printf("%+6hd\n", (short)-3);
//	printf("%+6hd\n", (short)-3);
//	ft_printf("%+6.0hd\n", (short)-3);
//	printf("%+6.0hd\n", (short)-3);
//	ft_printf("%+6.1hd\n", (short)-3);
//	printf("%+6.1hd\n", (short)-3);
//	ft_printf("%+6.2hd\n", (short)-3);
//	printf("%+6.2hd\n", (short)-3);
//	ft_printf("%+6.3hd\n", (short)-3);
//	printf("%+6.3hd\n", (short)-3);
//	ft_printf("%+6.4hd\n", (short)-3);
//	printf("%+6.4hd\n", (short)-3);
//	ft_printf("%+6.5hd\n", (short)-3);
//	printf("%+6.5hd\n", (short)-3);
//	ft_printf("%+6.6hd\n", (short)-3);
//	printf("%+6.6hd\n", (short)-3);
//	ft_printf("%+6.7hd\n", (short)-3);
//	printf("%+6.7hd\n", (short)-3);
//	printf("=====2=======\n");
//	ft_printf("%6hd\n", (short)-3);
//	printf("%6hd\n", (short)-3);
//	ft_printf("%6.0hd\n", (short)-3);
//	printf("%6.0hd\n", (short)-3);
//	ft_printf("%6.1hd\n", (short)-3);
//	printf("%6.1hd\n", (short)-3);
//	ft_printf("%6.2hd\n", (short)-3);
//	printf("%6.2hd\n", (short)-3);
//	ft_printf("%6.3hd\n", (short)-3);
//	printf("%6.3hd\n", (short)-3);
//	ft_printf("%6.4hd\n", (short)-3);
//	printf("%6.4hd\n", (short)-3);
//	ft_printf("%6.5hd\n", (short)-3);
//	printf("%6.5hd\n", (short)-3);
//	ft_printf("%6.6hd\n", (short)-3);
//	printf("%6.6hd\n", (short)-3);
//	ft_printf("%6.7hd\n", (short)-3);
//	printf("%6.7hd\n", (short)-3);
//	printf("=====3=======\n");
//	ft_printf("% 6hd\n", (short)3);
//	printf("% 6hd\n", (short)3);
//	ft_printf("%6.0hd\n", (short)3);
//	printf("% 6.0hd\n", (short)3);
//	ft_printf("% 6.1hd\n", (short)3);
//	printf("% 6.1hd\n", (short)3);
//	ft_printf("% 6.2hd\n", (short)3);
//	printf("% 6.2hd\n", (short)3);
//	ft_printf("% 6.3hd\n", (short)3);
//	printf("% 6.3hd\n", (short)3);
//	ft_printf("% 6.4hd\n", (short)3);
//	printf("% 6.4hd\n", (short)3);
//	ft_printf("% 6.5hd\n", (short)3);
//	printf("% 6.5hd\n", (short)3);
//	ft_printf("% 6.6hd\n", (short)3);
//	printf("% 6.6hd\n", (short)3);
//	ft_printf("% 6.7hd\n", (short)3);
//	printf("% 6.7hd\n", (short)3);
//	printf("=====4=======\n");
//	ft_printf("%- 6hd\n", (short)3);
//	printf("%- 6hd\n", (short)3);
//	ft_printf("%- 6.0hd\n", (short)3);
//	printf("%- 6.0hd\n", (short)3);
//	ft_printf("%- 6.1hd\n", (short)3);
//	printf("%- 6.1hd\n", (short)3);
//	ft_printf("%- 6.2hd\n", (short)3);
//	printf("%- 6.2hd\n", (short)3);
//	ft_printf("%- 6.3hd\n", (short)3);
//	printf("%- 6.3hd\n", (short)3);
//	ft_printf("%- 6.4hd\n", (short)3);
//	printf("%- 6.4hd\n", (short)3);
//	ft_printf("%- 6.5hd\n", (short)3);
//	printf("%- 6.5hd\n", (short)3);
//	ft_printf("%- 6.6hd\n", (short)3);
//	printf("%- 6.6hd\n", (short)3);
//	ft_printf("%- 6.7hd\n", (short)3);
//	printf("%- 6.7hd\n", (short)3);
//	printf("=====5=======\n");
//	ft_printf("%-6hd\n", (short)-3);
//	printf("%-6hd\n", (short)-3);
//	ft_printf("%-6.0hd\n", (short)-3);
//	printf("%-6.0hd\n", (short)-3);
//	ft_printf("%-6.1hd\n", (short)-3);
//	printf("%-6.1hd\n", (short)-3);
//	ft_printf("%-6.2hd\n", (short)-3);
//	printf("%-6.2hd\n", (short)-3);
//	ft_printf("%-6.3hd\n", (short)-3);
//	printf("%-6.3hd\n", (short)-3);
//	ft_printf("%-6.4hd\n", (short)-3);
//	printf("%-6.4hd\n", (short)-3);
//	ft_printf("%-6.5hd\n", (short)-3);
//	printf("%-6.5hd\n", (short)-3);
//	ft_printf("%-6.6hd\n", (short)-3);
//	printf("%-6.6hd\n", (short)-3);
//	ft_printf("%-6.7hd\n", (short)-3);
//	printf("%-6.7hd\n", (short)-3);
//	printf("=====6=======\n");
//	ft_printf("%0-+6hd\n", (short)-3);
//	printf("%0-+6hd\n", (short)-3);
//	ft_printf("%0-+6.0hd\n", (short)-3);
//	printf("%0-+6.0hd\n", (short)-3);
//	ft_printf("%0-+6.1hd\n", (short)-3);
//	printf("%0-+6.1hd\n", (short)-3);
//	ft_printf("%0-+6.2hd\n", (short)-3);
//	printf("%0-+6.2hd\n", (short)-3);
//	ft_printf("%0-+6.3hd\n", (short)-3);
//	printf("%0-+6.3hd\n", (short)-3);
//	ft_printf("%0-+6.4hd\n", (short)-3);
//	printf("%0-+6.4hd\n", (short)-3);
//	ft_printf("%0-+6.5hd\n", (short)-3);
//	printf("%0-+6.5hd\n", (short)-3);
//	ft_printf("%0-+6.6hd\n", (short)-3);
//	printf("%0-+6.6hd\n", (short)-3);
//	ft_printf("%0-+6.7hd\n", (short)-3);
//	printf("%0-+6.7hd\n", (short)-3);
//	printf("============\n");
//	ft_printf("%hd\n", 32767);
//	printf("%hd\n", 32767);
//	ft_printf("%hd\n", 32768);
//	printf("%hd\n", 32768);
//	printf("============\n");
//	ft_printf("%hd\n", -65535);
//	printf("%hd\n", -65535);
//	ft_printf("%hd\n", 65535);
//	printf("%hd\n", 65535);
//	ft_printf("%hd\n", 3);
//	printf("%hd\n", 3);
//	ft_printf("%d %d", 1, -2);
//	printf("%d\n", ft_printf("%#x", 0));
//	printf("%5.1S\n", L"±#ka¡ß");
//	ft_printf("my = %5.1S", L"±#ka¡ß");
	printf("%5.1%\n", L"±#ka¡ß");
	ft_printf("%5.1%", L"±#ka¡ß");
}

int main(void)
{
	char *l;

	l = setlocale(LC_ALL, "");
	if (l == NULL)
		printf("Locale not set\n");
	else
		printf("Locale set to %s\n", l);
	check_d();
}
