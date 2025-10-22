/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:40:41 by kchiang           #+#    #+#             */
/*   Updated: 2025/10/22 19:29:21 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# define FLAG_SPEC		"-0# +"
# define CONVERT_SPEC	"cspdiuxX%"
# define ALT_FORM		0b000001
# define ZERO_PAD		0b000010
# define LEFT_ALIGN		0b000100
# define ADD_SPACE		0b001000
# define SHOW_SIGN		0b010000
# define HAS_PREC		0b100000
# define LOWER_HEX_BASE	"0123456789abcdef"
# define UPPER_HEX_BASE	"0123456789ABCDEF"

# ifdef __APPLE__
#  define NULL_STR ""
#  define NULL_PTR "0x0"
# else
#  define NULL_STR "(null)"
#  define NULL_PTR "(nil)"
# endif

/* Struct for ft_printf. */
typedef struct s_spec
{
	unsigned char	flag;
	int				fdwidth;
	int				precision;
	int				is_neg;
	int				is_uphex;
}					t_spec;

/* Function pointer to call the specifier functions in ft_printf. */
typedef int	(*t_fptr)(va_list *, t_spec);

/* Function to print digit strings. */
int		ft_putnbrstr(char *str, int len, t_spec mod);

/* To be called by t_fptr. */
/* Functions for their respective conversion specifier. */
int		pf_char(va_list *ap, t_spec mod);
int		pf_string(va_list *ap, t_spec mod);
int		pf_ptr(va_list *ap, t_spec mod);
int		pf_int(va_list *ap, t_spec mod);
int		pf_upperhex(va_list *ap, t_spec mod);
int		pf_lowerhex(va_list *ap, t_spec mod);
int		pf_percent(va_list *ap, t_spec mod);

#endif
