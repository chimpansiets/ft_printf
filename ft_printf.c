/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 11:32:01 by svoort         #+#    #+#                */
/*   Updated: 2019/02/14 16:57:31 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* 
** TODO: Write duplicates for all putstr, putchar functions etc. So that it
** can know how many characters have been printed to the output.
*/

int		ft_check_conversion(va_list ap, char c)
{
	int chars;

	chars = 0;
	if (c == 'c')
		chars += ft_putchar_ret((char)va_arg(ap, int));
	else if (c == 'i' || c == 'd')
		ft_putnbr_ret(va_arg(ap, int), &chars);
	else if (c == 's')
		chars += ft_putstr_ret(va_arg(ap, char *));
	else if (c == 'p')
		chars += ft_putaddress(va_arg(ap, unsigned long int));
	else if (c == 'o')
		chars += ft_putstr_ret(ft_itoa_base(va_arg(ap, unsigned int), 8));
	//else if (c == 'u')
		//chars += ft_putunbr_ret(va_arg(ap, unsigned int));
	else if (c == 'x')
		chars += ft_putstr_ret(ft_itoa_base_u_low(va_arg(ap, unsigned int), 16));
	else if (c == 'X')
		chars += ft_putstr_ret(ft_itoa_base_u_up(va_arg(ap, unsigned int), 16));
	/*
	else if (c == 'f')
		printf("%f", va_arg(ap, double));
	*/
	return (chars);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	char	*ptr;
	int		chars;

	va_start(ap, format);
	ptr = (char *)format;
	chars = 0;
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ptr++;
			chars += ft_check_conversion(ap, *ptr);
		}
		else
			write(1, ptr, 1);
		ptr++;
		chars++;
	}
	va_end(ap);
	return (chars);
}

int		main(void)
{
	char str[] = "wauwie";
	// char str2[] = "wow zeg";
	// char str3[] = "wow zeg";
	// printf("ret: %i\n", ft_printf("%p, %p, %p, %o, %x, %X\n", str, str2, str3, 100, 346347, 346347));
	// printf("ret: %i\n", printf("%p, %p, %p, %o, %x, %X\n", str, str2, str3, 100, 346347, 346347));
	printf("my ret: %i\n", ft_printf("%s\n", str));
	printf("ret: %i\n", printf("%s\n", str));
	printf("my ret: %i\n", ft_printf("%i\n", 12345));
	printf("ret: %i\n", printf("%i\n", 12345));
	printf("my ret: %i\n", ft_printf("%o\n", 12345));
	printf("ret: %i\n", printf("%o\n", 12345));
	printf("my ret: %i\n", ft_printf("%x\n", 12345));
	printf("ret: %i\n", printf("%x\n", 12345));
	return (0);
}
