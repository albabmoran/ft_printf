/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:45:34 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 21:06:33 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *formatstr, ...);
int	ft_putchar(char c, int countb);
int	ft_putnbr(int n, int countb);
int	ft_putnbr_base(int n, char c, int countb);
int	ft_putstr(char *s, int countb);
int	ft_putunsigned(unsigned int n, int countb);
int	ft_putptr(void *ptr, int countb);

#endif