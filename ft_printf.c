/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:47:02 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/08 16:23:25 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	detect_format(char c, va_list *args, int countb)
{
	if (c == 'c')
		countb = ft_putchar(va_arg(*args, int), countb);
	else if (c == 's')
		countb = ft_putstr(va_arg(*args, char *), countb);
	else if (c == 'p')
		countb = ft_putptr(va_arg(*args, void *), countb);
	else if (c == 'd' || c == 'i')
		countb = ft_putnbr(va_arg(*args, int), countb);
	else if (c == 'u')
		countb = ft_putunsigned(va_arg(*args, unsigned int), countb);
	else if (c == 'x')
		countb = ft_putnbr_base(va_arg(*args, int), c, countb);
	else if (c == 'X')
		countb = ft_putnbr_base(va_arg(*args, int), c, countb);
	else if (c == '%')
		countb = ft_putchar('%', countb);
	else
		countb = ft_putchar(c, countb);
	return (countb);
}

int	ft_printf(char const *formatstr, ...)
{
	va_list	args;
	int		i;
	int		countb;

	va_start(args, formatstr);
	i = 0;
	countb = 0;
	if (!formatstr || (formatstr[0] == '%' && formatstr[1] == '\0'))
		return (-1);
	while (formatstr[i])
	{
		if (formatstr[i] == '%' && formatstr[i + 1])
		{
			countb = detect_format(formatstr[i + 1], &args, countb);
			i++;
		}
		else if (formatstr[i] != '%')
			countb = ft_putchar(formatstr[i], countb);
		i++;
	}
	va_end(args);
	return (countb);
}

