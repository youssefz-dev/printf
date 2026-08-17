/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <yzoullik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:04 by yzoullik          #+#    #+#             */
/*   Updated: 2024/12/03 13:50:30 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, int *len, char c)
{
	if (c == 'p')
	{
		ft_putstr("0x", len);
		c = 'x';
	}
	if (n > 15)
		ft_puthex(n / 16, len, c);
	if (n % 16 > 9)
	{
		ft_putchar(n % 16 + c - 33, len);
		return ;
	}
	ft_putchar(n % 16 + 48, len);
}
