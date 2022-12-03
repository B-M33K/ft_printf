/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:46:24 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:46:26 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	op;
	int		count;
	int		i;

	va_start(op, str);
	i = 0;
	count = 0;
	while (*(str + i))
	{
		if (*(str + i) != '%')
		{
			count += ft_putchar(*(str + i));
		}
		else
		{
			i++;
			if (*(str + i))
				ft_picker(str + i, op, &count);
			else
				break ;
		}
		i++;
	}
	va_end(op);
	return (count);
}
