/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:39:34 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 14:15:25 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int n)
{
	if (n > 9)
	{
		ft_putunsigned(n / 10);
		ft_putunsigned(n % 10);
	}
	if (n < 10)
		ft_putchar(n + '0');
}
