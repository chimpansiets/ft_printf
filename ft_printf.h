/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 15:47:05 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 16:33:47 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "./libft/libft.h"


/*
**	ft_printf.c
*/

int     ft_check_conversion(va_list ap, char c);
int		ft_printf(const char *format, ...);

/*
**	conversions1.c
*/

#endif