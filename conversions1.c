/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conversions1.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 15:49:37 by svoort         #+#    #+#                */
/*   Updated: 2019/02/18 15:40:14 by svoort        ########   odam.nl         */
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

void	ft_conversion_i(int nb, int *chars, int width)
{
	int	len;

	len = ft_lenofint(nb);
	while (len < width)
	{
		*chars += ft_putchar_ret(' ');
		width--;
	}
	ft_putnbr_ret(nb, chars);
}

int		ft_conversion_s(char *str, int width)
{
	int ret;
	int	len;

	ret = 0;
	len = ft_strlen(str);
	while (len < width)
	{
		ret += ft_putchar_ret(' ');
		width--;
	}
	ret += ft_putstr_ret(str);
	return (ret);
}

int		ft_conversion_p(unsigned long int nb, int width)
{
	int		ret;
	int		len;
	char	*output;

	ret = 0;
	output = ft_itoa_base_u_low(nb, 16);
	len = ft_strlen(output);
	while (len < width)
	{
		ret += ft_putchar_ret(' ');
		width--;
	}

}
