/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lenofint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/18 13:56:32 by svoort         #+#    #+#                */
/*   Updated: 2019/02/18 13:59:44 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenofint(int	nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb++;
	}
	while (nb > 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
