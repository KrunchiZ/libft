/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchiang <kchiang@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:52:05 by kchiang           #+#    #+#             */
/*   Updated: 2025/06/15 11:53:39 by kchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

/* Shorthands for unsigned variable types. */
typedef unsigned char		t_uchar;
typedef unsigned int		t_uint;
typedef unsigned long		t_ulong;
typedef unsigned long long	t_ullong;
typedef long long			t_llong;

/* Struct used in the linked list functions. */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* Linked list functions. */
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);

/* Functions in libft Part 1 and Part 2. */
t_llong	ft_atoi(const char *nptr);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_itoa(t_llong nbr);
char	*ft_itoa_base(t_llong nbr, const char *base);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_uitoa(t_ullong nbr);
char	*ft_uitoa_base(t_ullong nbr, const char *base);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	**ft_split(const char *s, char c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);

/* ******************************** */
/* ******************************** */
/* ********** ft_printf *********** */

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
	t_uchar	flag;
	int		fdwidth;
	int		precision;
	int		is_neg;
	int		is_uphex;
}			t_spec;

/* Function pointer to call the specifier functions in ft_printf. */
typedef int					(*t_fptr)(va_list, t_spec);

int		ft_printf(const char *format, ...);
int		ft_putnbrstr(char *str, int len, t_spec mod);

/* To be called by t_fptr. */
/* Functions for their respective conversion specifier. */
int		pf_char(va_list ap, t_spec mod);
int		pf_string(va_list ap, t_spec mod);
int		pf_ptr(va_list ap, t_spec mod);
int		pf_int(va_list ap, t_spec mod);
int		pf_upperhex(va_list ap, t_spec mod);
int		pf_lowerhex(va_list ap, t_spec mod);
int		pf_percent(va_list ap, t_spec mod);

/* ************************************** */
/* ************************************** */
/* *********** get_next_line ************ */

/* Default BUFFER_SIZE if not defined in terminal */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8192
# endif

/* Soft limits for max file descriptor limit */
# ifndef MAX_FDS
#  define MAX_FDS 1024
# endif

char	*get_next_line(int fd);
int		has_newline(char *str);
void	*extract_buffer(char *str);
char	*string_transfer(char *src);
char	*read_fd(char *host, char *buffer, int fd);

#endif
