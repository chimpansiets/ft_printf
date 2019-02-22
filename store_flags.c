/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   store_flags.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/20 12:10:52 by svoort         #+#    #+#                */
/*   Updated: 2019/02/20 13:08:55 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     is_flag(char c)
{
    if (*ft_strchr(ALL_FLAGS, c) == c)
        return (1);
    else
        return (0);
}

int     store_flags(t_printf *p, char *ptr)
{
    int     bin;

    (void)p;
    bin = 0;
    while (is_flag(*ptr))
    {
        if ((*ptr == 'l' || *ptr == 'h') && bin == 0)
            bin = 1;
        else if ((*ptr == 'l' || *ptr == 'h') && bin == 1)
            return (-1);
        else
            bin = 0;
        ptr++;
    }
    return (0);
}
