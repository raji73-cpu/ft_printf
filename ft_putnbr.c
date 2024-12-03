/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <abraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:46:54 by abraji            #+#    #+#             */
/*   Updated: 2024/11/22 10:12:04 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int i)
{
	int	count;

	count = 0;
	if (i == -2147483648)
		return (write(1, "-2147483648", 11));
	if (i < 0)
	{
		count += ft_putchar('-');
		i *= -1;
	}
	if (i > 9)
	{
		count += ft_putnbr(i / 10);
		count += ft_putnbr(i % 10);
	}
	else
	{
		count += ft_putchar(i + 48);
	}
	return (count);
}
