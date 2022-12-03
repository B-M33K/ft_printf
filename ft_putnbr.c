/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:01:05 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:47:01 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		count += ft_putchar('-');
	}
	if (nbr / 10)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar(nbr % 10 + 48);
	return (count);
}
