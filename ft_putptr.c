/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:49:51 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/04 16:55:33 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	int		i;
	char	*s;

	s = ptr;
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	main(void)
{
	char	*s;

	ft_putptr(s);
}