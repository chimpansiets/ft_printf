 - printf returns number of characters printed, without the trailing '\0'
 - printf returns a negative value if an ouput error occurs.
 - int	ft_printf(const char *format, ...);
 - format handles 3 things: - plain characters
							- character escape sequences (\a,\n,\t, etc.)
							- format specifications	(#, -, +, ` ', 0)
 - http://www.manpagez.com/man/3/printf/
 - https://www.ibm.com/support/knowledgecenter/en/ssw_ibm_i_72/rtref/printf.htm
 - man 3 printf / man 3 stdarg

stdarg good to know:
	make va_list to store arguments.
	call va_start with your va_list and first arg.
	call va_arg on every argument to process the argument into a type.
	call va_end in same scope.

stdarg example:

	void	test(const char *format, ...)
	{
		va_list ap;
		char c;
		int d;

		va_start(ap, format);
		while (format != '\0' && strcmp(format, "stack_chk_guard") != 0)
		{
			if (*format == 's')
			{
				printf("%s\n", va_arg(ap, char *));
			}
			if (*format == 'c')
			{
				printf("%c\n", (char)va_arg(ap, int));
			}
			if (*format == 'i')
			{
				printf("%i\n", va_arg(ap, int));
			}
			format++;
		}
		va_end(ap);
	}

 - fF      The double argument is rounded and converted to decimal notation
             in the style [-]ddd.ddd, where the number of digits after the
             decimal-point character is equal to the precision specification.
             If the precision is missing, it is taken as 6; if the precision
             is explicitly zero, no decimal-point character appears.  If a
             decimal point appears, at least one digit appears before it.

			 The above must work with the l and L flags.


TODO:
 - the following flags: hh, h, l and ll. 
 	l and L ony with %f, the rest with all conversions (diouxX);
 - minimum field width.
 - precision.