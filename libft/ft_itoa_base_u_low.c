/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base_u_low.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/12 14:50:50 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 13:56:49 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base_u_low(unsigned long int value, int base)
{
	char				*s;
	unsigned long int	n;
	int					i;

	n = value;
	i = 1;
	while ((n /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	n = value;
	while (i--)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'a' - 10;
		n /= base;
	}
	s[i] = 0;
	return (s);
}
