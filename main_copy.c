/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:49:44 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/07 19:55:57 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf(" %x ", -1);
	ft_printf(" %x ", -9);
	ft_printf(" %x ", -10);
	ft_printf(" %x ", -11);
	ft_printf(" %x ", -1);
	ft_printf(" %x ", -15);
	ft_printf(" %x ", -16);
	ft_printf(" %x ", -99);
	ft_printf(" %x ", -100);
	ft_printf(" %x ", -101);
	ft_printf(" %x ", INT_MIN);
	ft_printf(" %x ", LONG_MAX);
	ft_printf(" %x ", UINT_MAX);
	ft_printf(" %x ", ULONG_MAX);
	ft_printf(" %x ", 9223372036854775807LL);
	ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %x ", -42);

	printf("\nprintf:\n");

	printf(" %x ", -1);
	printf(" %x ", -9);
	printf(" %x ", -10);
	printf(" %x ", -11);
	printf(" %x ", -1);
	printf(" %x ", -15);
	printf(" %x ", -16);
	printf(" %x ", -99);
	printf(" %x ", -100);
	printf(" %x ", -101);
	printf(" %x ", INT_MIN);
	printf(" %x ", LONG_MAX);
	printf(" %x ", UINT_MAX);
	printf(" %x ", ULONG_MAX);
	printf(" %x ", 9223372036854775807LL);
	printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %x ", -42);

}