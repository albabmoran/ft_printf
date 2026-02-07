/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:42:17 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/07 19:59:33 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int n, char c, int countb)
{
	char			*base;
	unsigned int	new_n;

	new_n = (unsigned int)n;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else if (c == 'x')
		base = "0123456789abcdef";
	if (new_n < 0)
	{
		new_n = -new_n;
		countb = ft_putchar('-', countb);
	}
	if (new_n >= 16)
		countb = ft_putnbr_base(new_n / 16, c, countb);
	countb = ft_putchar(base[new_n % 16], countb);
	return (countb);
}
