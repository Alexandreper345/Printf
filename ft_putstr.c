/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:05:19 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/16 17:05:21 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int   ft_putstr(char *s)
{
    int i;

    i = 0;
    if (!s)
        ft_putstr("(null)");
    while (s[i])
    {
        i++;
    }
    write (1, s, i);
    return (i);
}