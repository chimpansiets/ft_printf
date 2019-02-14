/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putaddress.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 16:11:02 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 16:34:25 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putaddress(unsigned long int nb)
{
	int ret;

	ret = 0;
	ret += ft_putstr_ret("0x");
	ret += ft_putstr_ret(ft_itoa_base_u_low(nb, 16));
	return (ret);
}
