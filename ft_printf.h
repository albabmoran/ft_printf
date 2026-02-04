/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:45:34 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/04 16:56:22 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putnbr_base(int n, char c);
void	ft_putstr(char *s);
void	ft_putunsigned(unsigned int n);
void	ft_putptr();

#endif