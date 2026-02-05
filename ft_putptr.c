/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:49:51 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 13:12:53 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	unsigned long int	n;

	n = (unsigned long int)ptr;
	write(1, "0x", 2);
	if (n >= 16)
	{
		ft_putnbr_base((n / 16), 'x');
		ft_putnbr_base((n % 16), 'x');
	}
	if (n < 16)
		ft_putnbr_base(n, 'x');
}

/*int	main(void)
{
	char	s[] = "hola";

	ft_putptr(s);
	printf("\n%p", (void *)s);
	return (0);
}*/