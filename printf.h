/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:39:44 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:48:18 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_picker(const char *str, va_list op, int *count);
int		ft_putadd(size_t add, int i);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
size_t	ft_strlen(char *s);

#endif