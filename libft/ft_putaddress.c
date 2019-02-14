/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putaddress.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 16:11:02 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 13:57:51 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putaddress(unsigned long int nb)
{
	ft_putstr("0x");
	ft_putstr(ft_itoa_base_u_low(nb, 16));
}