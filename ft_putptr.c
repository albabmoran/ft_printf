/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:49:51 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 21:06:29 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr, int countb)
{
	unsigned long int	n;

	n = (unsigned long int)ptr;
	write(1, "0x", 2);
	countb += 2;
	if (n >= 16)
	{
		countb = ft_putnbr_base((n / 16), 'x', countb);
		countb = ft_putnbr_base((n % 16), 'x', countb);
	}
	if (n < 16)
		countb = ft_putnbr_base(n, 'x', countb);
	return (countb);
}
