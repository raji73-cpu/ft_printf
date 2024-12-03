/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <abraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:51:04 by abraji            #+#    #+#             */
/*   Updated: 2024/11/27 20:36:37 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthelp_adress(unsigned long nb)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		count += ft_puthelp_adress(nb / 16);
		count += ft_puthelp_adress(nb % 16);
	}
	else
		count += ft_putchar(base[nb % 16]);
	return (count);
}

int	ft_putadress(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (write(1, "(nil)", 5));
	count += ft_putstr("0x");
	count += ft_puthelp_adress(nb);
	return (count);
}
