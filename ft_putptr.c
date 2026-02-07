/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:49:51 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/07 19:16:17 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_address(unsigned long int n, int countb)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		countb = get_address((n / 16), countb);
		countb = get_address((n % 16), countb);
	}
	if (n < 16)
		countb = ft_putchar(base[n], countb);
	return (countb);
}

int	ft_putptr(void *ptr, int countb)
{
	unsigned long int	n;

	if (!ptr)
		return (ft_putstr("(nil)", countb));
	n = (unsigned long int)ptr;
	write(1, "0x", 2);
	countb += 2;
	if (n >= 16)
	{
		countb = get_address((n / 16), countb);
		countb = get_address((n % 16), countb);
	}
	if (n < 16)
		countb = get_address(n, countb);
	return (countb);
}
