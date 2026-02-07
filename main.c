/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:36:18 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/07 19:03:13 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("ft_printf: %c", 'a');
	printf("\nprintf: %c\n", 'a');

	printf(" %p %p ", (void *)0, (void *)0);
	ft_printf(" %p %p ", 0, 0);
	
	printf(" %x ", -1);
	ft_printf(" %x ", -1);

	ft_printf("ft_printf: %c%%", 'a');
	printf("\nprintf: %c%%\n", 'a');

	ft_printf("ft_printf: [%c]", '\0');
	printf("\nprintf: [%c]\n", '\0');

	ft_printf("ft_printf: %s", "hello");
	printf("\nprintf: %s\n", "hello");

	ft_printf("ft_printf: %s", (char *)NULL);
	printf("\nprintf: %s\n", (char *)NULL);

	ft_printf("ft_printf: %p", (void *)"hola");
	printf("\nprintf: %p\n", (void *)"hola");

	int y;
	y = ft_printf("%p", NULL);
	ft_printf("\n%d", y);
	y = printf("%p", NULL);
	printf("%d\n", y);

	ft_printf("ft_printf: %p", "hello");
	printf("\nprintf: %p\n", "hello");

	ft_printf("ft_printf: %d", 1234);
	printf("\nprintf: %d\n", 1234);

	ft_printf("ft_printf: %d", -1234);
	printf("\nprintf: %d\n", -1234);

	ft_printf("ft_printf: %d", INT_MIN);
	printf("\nprintf: %d\n", INT_MIN);

	ft_printf("ft_printf: %i", 5678);
	printf("\nprintf: %i\n", 5678);

	ft_printf("ft_printf: %u\n", -12);
	printf("printf: %u\n", -12);

	ft_printf("ft_printf: %u\n", 4294967295u);
	printf("printf: %u\n", 4294967295u);

	ft_printf("ft_printf: %x", 1234);
	printf("\nprintf: %x\n", 1234);

	ft_printf("ft_printf: %X", 1234);
	printf("\nprintf: %X\n", 1234);

	ft_printf("ft_printf: %%%%");
	printf("\nprintf: %%%%\n");

	ft_printf("ft_printf: %%%%o");
	printf("\nprintf: %%%%o\n");

	ft_printf("Hello world\n");
	printf("Hello world\n");

	ft_printf("");
	printf("\n\n");

	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("ft_printf: %s %d %c %u %%\n", "Edad:", 20, 'A', 42);
	printf("printf: %s %d %c %u %%\n", "Edad:", 20, 'A', 42);

	ft_printf("ft_printf: %% %%%%%%% %%\n");
	//printf("printf: %% %%%%%%% %%\n");

	ft_printf("X%%%%%%% Y\n");
	//printf("X%%%%%%% Y\n");

	ft_printf("ft_printf: %x\n", 255);
	printf("printf: %x\n", 255);

	ft_printf("ft_printf: %X\n", 255);
	printf("printf: %X\n", 255);

	ft_printf("ft_printf: %p\n", NULL);
	printf("printf: %p\n", NULL);

	int x = 42;
	ft_printf("ft_printf: %p\n", &x);
	printf("printf: %p\n", &x);

	ft_printf("ft_printf: %");
	//printf("printf: %");

	ft_printf("ft_printf: %k\n");
	//printf("printf: %k\n");

	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("%d %s %c %% %x\n", 1, "hi", 'A', 255);
	printf("%d %s %c %% %x\n", 1, "hi", 'A', 255);

	ft_printf("%s\n", (char *)NULL);
	printf("%s\n", (char *)NULL);

	ft_printf("%");
	//printf("%");

	ft_printf(NULL);
	printf(NULL);

	return (0);
}
