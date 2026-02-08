/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:36:18 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/08 16:23:31 by albben-a         ###   ########.fr       */
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
    //int x = 42;

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
    ret_ft = ft_printf("NULL: %s | INT_MIN: %d\n", (char *)NULL, INT_MIN);
    ret_real = printf("NULL: %s | INT_MIN: %d\n", (char *)NULL, INT_MIN);
    printf("ft: %d | real: %d\n\n", ret_ft, ret_real);

    printf("=== TEST 5 === (punteros y hex)\n");
    ret_ft = ft_printf("%p %x %X\n", NULL, 255, 255);
    ret_real = printf("%p %x %X\n", NULL, 255, 255);
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
