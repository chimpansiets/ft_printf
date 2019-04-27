/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 11:32:01 by svoort         #+#    #+#                */
/*   Updated: 2019/02/22 16:57:36 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
**	TODO:
**	- minimum field with.
**	- precision.
**	- the following flags: hh, h, l and ll. 
**		l and L ony with %f, the rest with all conversions (diouxX);
*/

int		ft_check_conversion(va_list ap, char c, int width)
{
	(void)width;
	int chars;

	chars = 0;
	if (c == 'c')
		chars += ft_conversion_c((char)va_arg(ap, int), width);
	else if (c == 'i' || c == 'd')
		ft_conversion_i(va_arg(ap, int), &chars, width);
	else if (c == 's')
		chars += ft_conversion_s(va_arg(ap, char *), width);
	else if (c == 'p')
		chars += ft_conversion_p(va_arg(ap, unsigned long int), width);
	else if (c == 'o')
		chars += ft_conversion_o(va_arg(ap, unsigned int), width);
	else if (c == 'u')
		ft_putunbr_ret(va_arg(ap, unsigned int), &chars);
	else if (c == 'x')
		chars += ft_putstr_ret(ft_itoa_base_u_low(va_arg(ap, unsigned int), 16));
	else if (c == 'X')
		chars += ft_putstr_ret(ft_itoa_base_u_up(va_arg(ap, unsigned int), 16));
	else if (c == 'f')
		chars += ft_putdouble_ret(va_arg(ap, double), 6, 0);
	//printf("\n char ret: %i\n", chars);
	return (chars);
}

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	t_printf	p;
	int			chars;

	va_start(ap, format);
	p.format = (char *)format;
	chars = 0;
	p.flags = 0;
	while (*p.format)
	{
		if (*p.format == '%')
		{
			p.format++;
			// if (!(store_flags(&signs, ptr)))
			// 	return (-1);
			if (ft_isdigit(*p.format))
				PADDING = check_width(&p);
			chars += ft_check_conversion(ap, *p.format, PADDING);
			PADDING = 0;
		}
		else
			write(1, p.format, 1);
		p.format++;
		if (*p.format != '\0' && *p.format != '%')
			chars++;
	}
	va_end(ap);
	return (chars);
}
