/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:40:26 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/18 20:41:49 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(char *base, unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_hexa(base, num / 16);
	count += ft_putchar(base[num % 16]);
	return (count);
}
