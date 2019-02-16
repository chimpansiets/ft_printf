/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putdouble_ret.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/16 12:21:17 by svoort         #+#    #+#                */
/*   Updated: 2019/02/16 12:49:04 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	printradix(double nb, int prec, char *buf)
{
	char	digit;
	int		size;

	size = prec + 1;
	*buf++ = '.';
	while (prec > 0)
	{
		if (nb != 0)
		{
			digit = (char)(nb *= 10);
			nb -= (double)digit;
			*buf++ = digit + '0';
		}
		else
			*buf++ = '0';
		--prec;
	}
	return (size);
}

void		ft_putdouble_ret(double nb, int prec, int sign)
{
	char	buf[MAX_DBL];
	int		size;
	double	mask;
	char	digit;

	size = 0;
	mask = 1.0;
	if (nb < 0 || sign)
	{
		buf[size++] = nb < 0 ? '-' :  '+';
		if (nb < 0)
			nb = 0 - nb;
	}
	while (nb / mask > 10.0)
		mask *= 10.0;
	while (mask >= 1.0)
	{
		nb -= mask * (double)(digit = (char)(nb / mask));
		mask /= 10.0;
		buf[size++] = digit + '0';
	}
	if (prec > 0)
		size += printradix(nb, prec, buf + size);
	buf[size] = '\0';
	return (write(1, buf, size), ft_putchar('\n'));
}
