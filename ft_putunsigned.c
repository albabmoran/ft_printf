/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:39:34 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/04 16:47:08 by albben-a         ###   ########.fr       */
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

/*
int	main(void)
{
	int	n = -12;

	ft_putunsigned(n);
}*/