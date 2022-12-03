/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_picker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:46:10 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:49:13 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

void	ft_picker(const char *str, va_list op, int *count)
{
	if (*str == 'c')
		*count += ft_putchar(va_arg(op, int));
	else if (*str == 's')
		*count += ft_putstr(va_arg(op, char *));
	else if (*str == 'd')
		*count += ft_putnbr(va_arg(op, int));
	else if (*str == 'p')
		*count += ft_putadd(va_arg(op, size_t), 1);
	else if (*str == 'i')
		*count += ft_putnbr(va_arg(op, int));
	else if (*str == 'u')
		*count += ft_putnbr_base(va_arg(op, unsigned int), "0123456789");
	else if (*str == 'x')
		*count += ft_putnbr_base(va_arg(op, unsigned int), "0123456789abcdef");
	else if (*str == 'X')
		*count += ft_putnbr_base(va_arg(op, unsigned int), "0123456789ABCDEF");
	else if (*str == '%')
		*count += ft_putchar('%');
	else
		*count += ft_putchar(*str);
}
