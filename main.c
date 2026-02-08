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

#include "ft_printf.h"
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
