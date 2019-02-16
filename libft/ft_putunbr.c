/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putunbr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 16:57:40 by svoort         #+#    #+#                */
/*   Updated: 2019/02/16 11:57:28 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_ret(unsigned int n, int *ctr)
{
	if (n > 4294967295)
		*ctr += ft_putstr_ret("4294967295");
	else if (n >= 10)
	{
		ft_putnbr_ret(n / 10, ctr);
		ft_putnbr_ret(n % 10, ctr);
	}
	else
		*ctr += ft_putchar_ret(n + '0');
}
