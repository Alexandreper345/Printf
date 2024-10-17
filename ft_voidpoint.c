/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidpoint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:59:57 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/17 15:59:58 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_voidpoint(void *str)
{
    char    *base;
    int     count;
    int     *hexa;

    hexa = 16;    
    base = "0123456789abcdef";
    count = 0;    
    if ((int *)str >= hexa)
        count += ft_voidpoint((int *)str / hexa);
    count += ft_putchar('0');
    count += ft_putchar('x');
    count += ft_putchar(base[(int *)str % hexa]);
    return (count);
}