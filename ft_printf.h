/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <abraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:59:21 by abraji            #+#    #+#             */
/*   Updated: 2024/11/24 17:05:57 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putadress(unsigned long nb);
int	ft_putchar(char c);
int	ft_putnbr(int i);
int	ft_putstr(char *str);
int	ft_puthexal(unsigned int nb);
int	ft_puthexau(unsigned int nb);
int	ft_putunsig(unsigned int nb);

#endif
