/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_ret.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/14 16:09:51 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 16:33:04 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_putchar_ret(char c)
{
    write(1, &c, 1);
    return (1);
}
