/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidpoint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:59:57 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/20 21:03:04 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_point_hexa(unsigned long long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_point_hexa(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_voidpoint(void *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_point_hexa((unsigned long long)str);
	return (count);
}
