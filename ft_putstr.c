/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:01:17 by obahi             #+#    #+#             */
/*   Updated: 2022/12/03 10:47:23 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s)
		while (*s)
			count += write(1, s++, 1);
	else
		count = write(1, "(null)", 6);
	return (count);
}
