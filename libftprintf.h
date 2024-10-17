/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:49:12 by alda-sil          #+#    #+#             */
/*   Updated: 2024/10/16 15:49:13 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_putnbr_hexa(int  d ,char *base,int s);
int     ft_putnbunsi(unsigned int num);
int ft_voidpoint(void *str);

#endif