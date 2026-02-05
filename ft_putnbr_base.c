/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:42:17 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 21:06:22 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int n, char c, int countb)
{
	char		*base;
	long int	new_n;

	new_n = n;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (new_n < 0)
	{
		new_n = -new_n;
		write(1, "-", 1);
		countb++;
	}
	if (new_n >= 16)
	{
		countb = ft_putnbr_base(new_n / 16, c, countb);
		countb = ft_putnbr_base(new_n % 16, c, countb);
	}
	if (new_n < 16)
		countb = ft_putchar(base[new_n], countb);
	return (countb);
}
