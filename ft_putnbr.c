/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:46:56 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/21 16:24:52 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(char *base, int s)
{
	int		count;

	count = 0;
	if (s == -2147483648)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (s < 0)
	{
		count += ft_putchar('-');
		s *= (-1);
	}
	if (s >= 10)
		count += ft_putnbr(base, s / 10);
	count += ft_putchar(base[s % 10]);
	return (count);
}
