#include <stdio.h>
#include <limits.h>
#include <libft.h>
#include <locale.h>

int main(void)
{
	int a;
	int b;

	setlocale(LC_ALL, "");
	a = printf("1asgf %S\n", L"😦");
	b = ft_printf("2asgf %S\n", L"😦");
	printf("a = %d, b = %d", a, b);
}
