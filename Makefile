CC := cc
CFLAGS := -Wall -Wextra -Werror -I.
NAME := ft_atoi		ft_bzero	ft_calloc	ft_isalnum	ft_isalpha	\
		ft_isascii	ft_isdigit	ft_isprint	ft_memchr	ft_memcmp	\
		ft_memcpy	ft_memmove	ft_memset	ft_strchr	ft_strdup	\
		ft_strlcat	ft_strlcpy	ft_strlen	ft_strncmp	ft_strnstr	\
		ft_strrchr	ft_tolower	ft_toupper

.PHONY: all fclean clean re

all: libft.a

libft.a: $(NAME).o 
	ar rcs $@ $^

$(NAME).o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f libft.a

clean:
	rm -f $(NAME).o

re: fclean all
