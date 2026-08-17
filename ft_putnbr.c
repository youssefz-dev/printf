/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:14:04 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/28 16:50:04 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, int *len, char c)
{
	if (c == 'u')
	{
		if ((unsigned int) n > 9)
			ft_putnbr((unsigned int) n / 10, len, c);
		ft_putchar((unsigned int) n % 10 + 48, len);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-', len);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr(n / 10, len, c);
		ft_putchar(n % 10 + 48, len);
	}
}
