/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:47:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 13:12:23 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	detect_format(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_args(args, char));
	else if (c == 's')
		ft_putstr(va_args(args, char *));
	else if (c == 'p')
		ft_putptr(va_args(args, void *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_args(args, int));
	else if (c == 'u')
		ft_putunsigned(va_args(args, unsigned int));
	else if (c == 'x')
		ft_putnbr_base(va_args(args, int), c);
	else if (c == 'X')
		ft_putnbr_base(va_args(args, int), c);
}

int	ft_printf(char const *formatstr, ...)
{
	va_list	args;
	int		i;

	va_start(args, formatstr);
	i = 0;
	while (formatstr[i])
	{
		if (formatstr[i] != '%' && (i != 0 || formatstr[i - 1] == '%'))
		{
			if (!detect_format(formatstr[i], args))
				ft_putchar(formatstr[i]);
		}
		if (formatstr[i] == '%' && (i != 0 || formatstr[i - 1] == '%'))
			ft_putchar('%');
		i++;
	}
	va_end(args);
}
