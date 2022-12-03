/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:46:31 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:46:35 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putadd(size_t add, int i)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (i)
		count += write(1, "0x", 2);
	if (add / 16)
		count += ft_putadd(add / 16, 0);
	count += write(1, base + add % 16, 1);
	return (count);
}
