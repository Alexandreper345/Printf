/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbunsi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:37:51 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/18 20:42:01 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbunsi(unsigned int num)
{
	unsigned int	count;
	char			*base;

	base = "0123456789";
	count = 0;
	if (num >= 10)
		count += ft_putnbunsi(num / 10);
	count += ft_putchar(base[num % 10]);
	return (count);
}
