/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexau.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraji <abraji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:11:24 by abraji            #+#    #+#             */
/*   Updated: 2024/11/24 17:27:26 by abraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexau(unsigned int nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_puthexau(nb / 16);
		count += ft_puthexau(nb % 16);
	}
	else
	{
		count += ft_putchar(base[nb % 16]);
	}
	return (count);
}
