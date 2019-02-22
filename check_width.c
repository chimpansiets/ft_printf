/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_width.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/18 13:22:02 by svoort         #+#    #+#                */
/*   Updated: 2019/02/20 13:06:15 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_width(t_printf *p)
{
	char	*c_width;
	int		i;

	i = 0;
	while (ft_isdigit(p->format[i]))
		i++;
	c_width = malloc(sizeof(char) * i + 1);
	i = 0;
	while (ft_isdigit(p->format[i]))
	{
		c_width[i] = p->format[i];
		i++;
	}
	while (ft_isdigit(*p->format))
		p->format++;
	c_width[i] = '\0';
	return (ft_atoi(c_width));
}
