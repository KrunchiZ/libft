CC := cc
CFLAGS := -Wall -Wextra -Werror -I.

NAME := libft.a
SRCS := \
		ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c	ft_isalpha.c	\
		ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_memchr.c		ft_memcmp.c		\
		ft_memcpy.c		ft_memmove.c	ft_memset.c		ft_strchr.c		ft_strdup.c		\
		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		ft_strncmp.c	ft_strnstr.c	\
		ft_strrchr.c	ft_tolower.c	ft_toupper.c	ft_substr.c		ft_strjoin.c	\
		ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c	ft_striteri.c	\
		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c
BONUS_SRCS := \
			  ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	\
			  ft_lstadd_back.c	ft_lstdelone.c		ft_lstclear.c	ft_lstiter.c	\
			  ft_lstmap.c

OBJS := $(SRCS:.c=.o)
BONUS_OBJS := $(BONUS_SRCS:.c=.o)

GREEN := \e[32m
CYAN := \e[36m
WHITE := \e[0m

.PHONY: all fclean clean re bonus

all: $(NAME)

$(NAME): $(OBJS) 
	@ar rcs $@ $^
	@echo "Archiving $(GREEN)$(NAME)$(WHITE)..."

bonus: $(NAME) $(BONUS_OBJS)
	@ar rcs $(NAME) $^
	@echo "Archiving bonus $(GREEN)$(NAME)$(WHITE)..."

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $(CYAN)$@$(WHITE)..."

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(GREEN)$(NAME)$(WHITE)..."

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Removing object files..."

re: fclean all
