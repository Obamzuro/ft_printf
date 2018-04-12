/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 10:33:05 by obamzuro          #+#    #+#             */
/*   Updated: 2018/04/12 03:06:25 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define AM_FLAGS 5
# define AM_SIZES 6
# define AM_CONVS 1
# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

typedef enum	e_flags
{
	minus,
	plus,
	space,
	sharp,
	zero
}				t_flags;

typedef struct	s_flags_corr
{
	t_flags flag;
	char	ascii;
	char	exist;
}				t_flags_corr;

typedef enum	s_size
{
	LONG_LONG_INT,
	CHAR,
	INTMAX_T,
	SIZE_T,
	LONG_INT,
	SHORT_INT,
	INT
} t_size;

typedef struct	s_size_corr
{
	t_size	size;
	char	*spec;
} t_size_corr;

struct s_conv_corr;

typedef struct	s_special
{
	t_flags_corr		flag[AM_FLAGS];
	int					width;
	ssize_t				precision;
	t_size_corr			*size;
	struct s_conv_corr	*conversion;
} t_special;

typedef struct s_conv_corr
{
	char	ascii;
	void	(*f)(t_special *, va_list *);
} t_conv_corr;

void	print_decimal(t_special *spec, va_list *ap);
int		ft_printf(const char *src, ...);

#endif
