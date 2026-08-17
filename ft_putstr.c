/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzoullik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:13:42 by yzoullik          #+#    #+#             */
/*   Updated: 2024/11/28 15:03:09 by yzoullik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)", len);
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], len);
		i++;
	}
}
