/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/11 15:47:05 by svoort         #+#    #+#                */
/*   Updated: 2019/02/22 10:36:12 by svoort        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
**  includes
*/

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "./libft/libft.h"

/*
**  macros
*/

# define PADDING p.padding
# define FLAGS p->flags

# define FL_HASH	'#'
# define FL_ZERO	'0'
# define FL_MIN		'-'
# define FL_PLUS	'+'
# define FL_SPACE	' '
# define FL_CHAR	'c'
# define FL_STR		's'
# define FL_ADDR	'p'
# define FL_I		'i'
# define FL_D		'd'
# define FL_OCT     'o'
# define FL_UNS		'u'
# define FL_UHEX_L	'x'
# define FL_UHEX_U	'X'
# define FL_H		'h'
# define FL_L_LOW	'l'
# define FL_L_UP	'L'
# define FL_PREC	'.'

# define ALL_FLAGS "#0-+ cspidouxXhlL."

# define SET_HASH(x) (1)
# define SET_ZERO(x) (2)
# define SET_MIN(x) (4)
# define SET_PLUS(x) (8)
# define SET_SPACE(x) (16)
# define SET_CHAR(x) (32)
# define SET_STR(x) (64)
# define SET_ADDR(x) (128)
# define SET_INT(x) (256)
# define SET_OCT(x) (512)
# define SET_UNS(x) (1024)
# define SET_UHEX_L(x) (2048)
# define SET_UHEX_U(x) (4096)
# define SET_HH(x) (8192)
# define SET_H(x) (16384)
# define SET_LL(x) (32768)
# define SET_L(x) (65536)
# define SET_PREC(x) (131072)

# define ENABLE_FLAG(x) (signs->flags |= x)

# ifndef BUFF_SIZE
#  define BUFF_SIZE 64
# endif

/*
**  structures
*/

typedef struct  s_printf
{
    int         len;
    short       f;
    short       n;
    int         min_length;
    int         precision;
    int         padding;
    int         printed;
    int         buffer_index;
    char        buf[BUFF_SIZE];
    va_list     ap;
    char        *format;
    unsigned    c;
    uint32_t    flags;
}               t_printf;


/*
**	ft_printf.c
*/

int		ft_check_conversion(va_list ap, char c, int width);
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

int		check_width(t_printf *p);

/*
**  store_flags.c
*/

int     store_flags(t_printf *signs, char *ptr);

#endif
