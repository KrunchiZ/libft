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
GREEN := \e[32m
CYAN := \e[36m
WHITE := \e[0m

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): $(OBJS) 
	@ar rcs $@ $^
	@echo "Compiling $(GREEN)$(NAME)$(WHITE)..."

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $(CYAN)$@$(WHITE)..."

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(GREEN)$(NAME)$(WHITE)..."

clean:
	@rm -f $(OBJS)
	@echo "Removing object files..."

re: fclean all
