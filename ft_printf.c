/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:47:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 16:54:05 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	detect_format(char c, va_list *args)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X')
	{
		if (c == 'c')
			ft_putchar(va_arg(*args, int));
		else if (c == 's')
			ft_putstr(va_arg(*args, char *));
		else if (c == 'p')
			ft_putptr(va_arg(*args, void *));
		else if (c == 'd' || c == 'i')
			ft_putnbr(va_arg(*args, int));
		else if (c == 'u')
			ft_putunsigned(va_arg(*args, unsigned int));
		else if (c == 'x')
			ft_putnbr_base(va_arg(*args, int), c);
		else if (c == 'X')
			ft_putnbr_base(va_arg(*args, int), c);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *formatstr, ...)
{
	va_list	args;
	int		i;

	va_start(args, formatstr);
	i = 0;
	while (formatstr[i])
	{
		if (formatstr[i] == '%' && (detect_format(formatstr[i + 1], &args)))
				i++;
		else if (formatstr[i] == '%' && formatstr[i + 1] == '%')
		{
			ft_putchar('%');
			i++;
		}
		else if (formatstr[i] != '%')
			ft_putchar(formatstr[i]);
		i++;
	}
	va_end(args);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_printf("%d%d%d\n", 1, 2, 3);
	printf("%d%d%d\n", 1, 2, 3);

	ft_printf("%s%d%c%u%x%X%%\n", "hi", -42, 'A', 42, 255, 255);
	printf("%s%d%c%u%x%X%%\n", "hi", -42, 'A', 42, 255, 255);

	ft_printf("A:%d B:%d C:%d\n", 10, 20, 30);
	printf("A:%d B:%d C:%d\n", 10, 20, 30);

	ft_printf("%%%%%d%%%%\n", 42);
	printf("%%%%%d%%%%\n", 42);
	
	ft_printf("ft_printf: %s %d %c %u %%\n", "Edad:", 20, 'A', 42);
	printf("printf: %s %d %c %u %%\n", "Edad:", 20, 'A', 42);

	return (0);
}*/