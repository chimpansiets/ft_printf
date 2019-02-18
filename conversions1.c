/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversions1.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 15:49:37 by svoort         #+#    #+#                */
/*   Updated: 2019/02/18 13:58:38 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_conversion_c(char c, int width)
{
	int	ret;

	ret = 0;
	while(width > 1)
	{
		ret += ft_putchar_ret(' ');
		width--;
	}
	ret += ft_putchar_ret(c);
	return (ret);
}

int		ft_conversion_i(int nb, int *chars, int width)
{
	if (lenofint(nb) < width)
}