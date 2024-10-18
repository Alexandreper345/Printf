/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:33:52 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/18 20:41:47 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//static int	ft_parametres()

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 's')
				count += ft_putstr(va_arg(list, char *));
			else if (*s == 'c')
				count += ft_putchar((char)va_arg(list, int));
			else if (*s == 'd' || *s == 'i')
				count += ft_putnbr("0123456789", va_arg(list, int));
			else if (*s == 'X')
				count += ft_hexa("0123456789ABCDEF", va_arg(list, unsigned int));
			else if (*s == 'x')
				count += ft_hexa("0123456789abcdef", va_arg(list, unsigned int));
			else if (*s == 'u')
				count += ft_putnbunsi(va_arg(list, unsigned int));
			else if (*s == 'p')
				count += ft_voidpoint(va_arg(list, void *));
			else if (*s == '%')
				count += ft_putchar(*s);
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(list);
	return (0);
}
