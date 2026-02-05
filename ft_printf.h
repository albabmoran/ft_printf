/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:45:34 by albben-a          #+#    #+#             */
/*   Updated: 2026/02/05 13:12:31 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putnbr_base(int n, char c);
void	ft_putstr(char *s);
void	ft_putunsigned(unsigned int n);
void	ft_putptr(void *ptr);

#endif