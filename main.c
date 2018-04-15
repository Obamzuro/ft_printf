/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:11:53 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/15 05:13:31 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>

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
	int a;
	int b;
	char *s = malloc(12);
	unsigned long l = 9223372036854775806;
	//"dfjbsldjds";
	char c;

//	a = printf("%.4S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
//	b = ft_printf("%.4S\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
//
//	a = printf(/*"%.5p, %.p %9.2p {%p} %-13p*/" {%05p}\n", s/*, 0, 1234, 0, s, 0*/);
//	b = ft_printf(/*"%.5p, %.p %9.2p {%p} %-13p*/" {%05p}\n", s/*, 0, 1234, 0, s, 0*/);

	a = printf("{%#.5x} %#x %#x\n", 1, 42, 0);
	b = ft_printf("{%#.5x} %#x %#x\n", 1, 42, 0);
//	b = ft_printf("%S\n", L"хуй");
//	printf("a = %d b = %d\n", a, b);
//	a = printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
//L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
//L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
//	b = ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
//L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
//L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");
	printf("a = %d b = %d\n", a, b);
//	if (a == b)
//		printf("yes\n");
//	else
//		printf("no\n");
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
