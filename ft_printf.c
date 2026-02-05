/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:47:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 21:23:20 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	detect_format(char c, va_list *args, int countb)
{
	if (c == 'c')
		countb = ft_putchar(va_arg(*args, int), countb);
	else if (c == 's')
		countb = ft_putstr(va_arg(*args, char *), countb);
	else if (c == 'p')
		countb = ft_putptr(va_arg(*args, void *), countb);
	else if (c == 'd' || c == 'i')
		countb = ft_putnbr(va_arg(*args, int), countb);
	else if (c == 'u')
		countb = ft_putunsigned(va_arg(*args, unsigned int), countb);
	else if (c == 'x')
		countb = ft_putnbr_base(va_arg(*args, int), c, countb);
	else if (c == 'X')
		countb = ft_putnbr_base(va_arg(*args, int), c, countb);
	else if (c == '%')
		countb = ft_putchar('%', countb);
	return (countb);
}

int	ft_printf(char const *formatstr, ...)
{
	va_list	args;
	int		i;
	int		countb;
	int		check;

	va_start(args, formatstr);
	i = 0;
	countb = 0;
	if (!formatstr || (formatstr[0] == '%' && formatstr[1] == '\0'))
		return (-1);
	while (formatstr[i])
	{
		if (formatstr[i] == '%' && formatstr[i + 1])
		{
			check = countb;
			countb = detect_format(formatstr[i + 1], &args, countb);
			if (check == countb)
				countb = ft_putchar(formatstr[i + 1], countb);
			i++;
		}
		else if (formatstr[i] != '%')
			countb = ft_putchar(formatstr[i], countb);
		i++;
	}
	va_end(args);
	return (countb);
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
/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int ret_ft;
    int ret_real;
    int x = 42;

    printf("=== TEST 1 ===\n");
    ret_ft = ft_printf("Hola %s %d %c %%\n", "mundo", 42, 'A');
    ret_real = printf("Hola %s %d %c %%\n", "mundo", 42, 'A');
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 2 ===\n");
    ret_ft = ft_printf("%d %d %d\n", 1, 2, 3);
    ret_real = printf("%d %d %d\n", 1, 2, 3);
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 3 ===\n");
    ret_ft = ft_printf("[%c][%s][%d]\n", 'A', "BCD", 42);
    ret_real = printf("[%c][%s][%d]\n", 'A', "BCD", 42);
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 4 === (NULL y edge)\n");
    ret_ft = ft_printf("NULL: %s | INT_MIN: %d\n", NULL, INT_MIN);
    ret_real = printf("NULL: %s | INT_MIN: %d\n", NULL, INT_MIN);
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 5 === (punteros y hex)\n");
    ret_ft = ft_printf("%p %x %X\n", &x, 255, 255);
    ret_real = printf("%p %x %X\n", &x, 255, 255);
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 6 === (char nulo)\n");
    ret_ft = ft_printf("A%cB%dC\n", '\0', 42);
    ret_real = printf("A%cB%dC\n", '\0', 42);
    printf("\nft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 7 === (porcentajes)\n");
    ret_ft = ft_printf("%%%%%d%%%%\n", 42);
    ret_real = printf("%%%%%d%%%%\n", 42);
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    return 0;
}*/
