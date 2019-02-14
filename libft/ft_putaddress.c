/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putaddress.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 16:11:02 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 16:54:58 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ret is here initialized to 1, because it doesnt count the trailing '\0'
**	twice, so we dont initialize it to 0 to compensate for the first
**	trailing '\0' that is not counted.
*/

int		ft_putaddress(unsigned long int nb)
{
	int ret;

	ret = 1;
	ret += ft_putstr_ret("0x");
	ret += ft_putstr_ret(ft_itoa_base_u_low(nb, 16));
	return (ret);
}
