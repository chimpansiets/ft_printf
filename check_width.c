/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_width.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/18 13:22:02 by svoort         #+#    #+#                */
/*   Updated: 2019/02/18 13:41:41 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_width(char **str)
{
	char	*c_width;
	int		i;

	i = 0;
	while (ft_isdigit(str[0][i]))
		i++;
	c_width = malloc(sizeof(char) * i + 1);
	i = 0;
	while (ft_isdigit(str[0][i]))
	{
		c_width[i] = str[0][i];
		i++;
	}
	while (ft_isdigit(**str))
		(*str)++;
	c_width[i] = '\0';
	return (ft_atoi(c_width));
}
