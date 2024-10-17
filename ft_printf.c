/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:33:52 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/16 15:33:54 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
		if(*s == '%')
		{
			s++;
			if (*s == 's')
				count += ft_putstr(va_arg(list, char *));
			else if (*s == 'c')
				count += ft_putchar((char)va_arg(list, int));
			else if (*s == 'd' || *s == 'i')
				count += ft_putnbr_hexa(10,"0123456789",va_arg(list, int));
			else if (*s == 'X')
				count += ft_putnbr_hexa(16,"0123456789ABCDEF",va_arg(list, int));
			else if (*s == 'x')
				count += ft_putnbr_hexa(16,"0123456789abcdef", va_arg(list,int));
			else if (*s == 'u')
				count += ft_putnbunsi(va_arg(list,int));
			else if (*s == 'p')
				count += ft_voidpoint(va_arg(list,int));
		}
		else
			count += ft_putchar(*s);
		s++;
	}
	va_end(list);
	return (0);
}

#include <stdio.h>
int	main(void)
{

	int a = 10;
    void *ptr = &a; // Ponteiro void apontando para 'a'

    ft_printf("O endereço de 'a' em hexadecimal é: %p\n", ptr);



    //printf("original Teste de conversão para unsignint: %u, %u\n", 2311231, -2114);
    //ft_printf("meu Teste de conversão para unsigned int: %u, %u\n", 2311231, -2114);

	/*
    int nums[] = {0, 1, 10, 255, 4095, 65535, 2147483647}; // Números para testar
    size_t num_count = sizeof(nums) / sizeof(nums[0]); // Calcular o número de elementos

    for (size_t i = 0; i < num_count; i++) { // Usar size_t para o índice
        ft_printf("Número HEXADECIMAL: %X -> hexadecimal x: %x \n", nums[i], nums[i]);
    }
	*/
}