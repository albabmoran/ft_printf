/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:34:31 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/07 19:23:51 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int countb)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		countb += 11;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			countb = ft_putchar('-', countb);
		}
		if (n > 9)
		{
			countb = ft_putnbr(n / 10, countb);
			countb = ft_putnbr(n % 10, countb);
		}
		if (n < 10)
			countb = ft_putchar(n + '0', countb);
	}
	return (countb);
}
