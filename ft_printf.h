/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 15:47:05 by svoort         #+#    #+#                */
/*   Updated: 2019/02/18 15:53:28 by svoort        ########   odam.nl         */
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

int     ft_check_conversion(va_list ap, char c, int width);
int		ft_printf(const char *format, ...);

/*
**	conversions1.c
*/

int		ft_conversion_c(char c, int width);
void	ft_conversion_i(int nb, int *chars, int width);
int		ft_conversion_s(char *str, int width);
int		ft_conversion_p(unsigned long int nb, int width);
int		ft_conversion_o(unsigned int nb, int width);

/*
**	check_width.c
*/

int		check_width(char **str);

#endif
