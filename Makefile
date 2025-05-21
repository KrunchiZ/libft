CC := cc
CFLAGS := -Wall -Wextra -Werror -I.
NAME := libft.a
SRCS := ft_atoi		ft_bzero	ft_calloc	ft_isalnum	ft_isalpha	\
		ft_isascii	ft_isdigit	ft_isprint	ft_memchr	ft_memcmp	\
		ft_memcpy	ft_memmove	ft_memset	ft_strchr	ft_strdup	\
		ft_strlcat	ft_strlcpy	ft_strlen	ft_strncmp	ft_strnstr	\
		ft_strrchr	ft_tolower	ft_toupper	ft_substr	ft_strjoin	\
		ft_strtrim
OBJS := $(addsuffix .o, $(SRCS))

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all
