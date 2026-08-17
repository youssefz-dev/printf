/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <yzoullik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:13:19 by yzoullik          #+#    #+#             */
/*   Updated: 2024/12/04 09:13:39 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puts(va_list args, int *len, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'p')
		ft_puthex(va_arg(args, unsigned long), len, c);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len, c);
	else if (c == 'u')
		ft_putnbr(va_arg(args, unsigned int), len, c);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(args, unsigned int), len, c);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			if (f[i] == '\0')
				break ;
			ft_puts(args, &len, f[i]);
		}
		else
			ft_putchar(f[i], &len);
		i++;
	}
	va_end(args);
	return (len);
}
