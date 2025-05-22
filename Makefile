CC := cc
CFLAGS := -Wall -Wextra -Werror -I.

NAME := libft.a
SRCS := \
		ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c	ft_isalpha.c	\
		ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_memchr.c		ft_memcmp.c		\
		ft_memcpy.c		ft_memmove.c	ft_memset.c		ft_strchr.c		ft_strdup.c		\
		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		ft_strncmp.c	ft_strnstr.c	\
		ft_strrchr.c	ft_tolower.c	ft_toupper.c	ft_substr.c		ft_strjoin.c	\
		ft_strtrim.c	ft_split.c
OBJS := $(SRCS:.c=.o)

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
