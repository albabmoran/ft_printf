/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:36:18 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 14:59:12 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("ft_printf: %c", 'a');
	printf("\nprintf: %c\n", 'a');

	ft_printf("ft_printf: %c%%", 'a');
	printf("\nprintf: %c%%\n", 'a');

	ft_printf("ft_printf: %s", "hello");
	printf("\nprintf: %s\n", "hello");

	ft_printf("ft_printf: %p", (void *)"hola");
	printf("\nprintf: %p\n", (void *)"hola");

	ft_printf("ft_printf: %p", "hello");
	printf("\nprintf: %p\n", "hello");

	ft_printf("ft_printf: %d", 1234);
	printf("\nprintf: %d\n", 1234);

	ft_printf("ft_printf: %i", 5678);
	printf("\nprintf: %i\n", 5678);

	ft_printf("ft_printf: %u\n", -12);
	printf("printf: %u\n", -12);

	ft_printf("ft_printf: %x", 1234);
	printf("\nprintf: %x\n", 1234);

	ft_printf("ft_printf: %X", 1234);
	printf("\nprintf: %X\n", 1234);

	ft_printf("ft_printf: %%%%");
	printf("\nprintf: %%%%\n");

	ft_printf("ft_printf: %%%%o");
	printf("\nprintf: %%%%o\n");

	return (0);
}
