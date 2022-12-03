/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:46:47 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:46:55 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr / ft_strlen(base))
		count += ft_putnbr_base(nbr / ft_strlen(base), base);
	count += write(1, base + nbr % ft_strlen(base), 1);
	return (count);
}
