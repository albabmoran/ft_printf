/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:39:34 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 20:52:07 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n, int countb)
{
	if (n > 9)
	{
		countb = ft_putunsigned(n / 10, countb);
		countb = ft_putunsigned(n % 10, countb);
	}
	if (n < 10)
		countb = ft_putchar(n + '0', countb);
	return (countb);
}
