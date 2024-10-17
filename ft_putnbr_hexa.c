/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:46:56 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/17 13:46:59 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hexa(int  d ,char *base,int s)
{
	int		count;

	count = 0;
	if (s == -2147483648)
		count += ft_putstr("-2147483648");
	if (s < 0)
	{
		count += ft_putchar('-');
		s *= (-1);
	}	
	if (s >= d)
		count += ft_putnbr_hexa(d, base, s / d);
	count += ft_putchar(base[s % d]);
	return (count);
}
