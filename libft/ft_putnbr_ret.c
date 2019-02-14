/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_ret.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/14 16:10:56 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 16:58:52 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void     ft_putnbr_ret(int n, int *ctr)
{
    if (n == -2147483648)
		*ctr += ft_putstr_ret("-2147483648");
	else if (n < 0)
	{
		*ctr += ft_putchar_ret('-');
		ft_putnbr_ret(-n, ctr);
	}
	else if (n >= 10)
	{
		ft_putnbr_ret(n / 10, ctr);
		ft_putnbr_ret(n % 10, ctr);
	}
	else
		*ctr += ft_putchar_ret(n + '0');
}