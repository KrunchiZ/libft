CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

NAME	:= libft.a
LIBFT	:= \
		   ft_atoi.c		ft_bzero.c			ft_calloc.c		ft_isalnum.c	\
		   ft_isalpha.c		ft_isascii.c		ft_isdigit.c	ft_isprint.c	\
		   ft_memchr.c		ft_memcmp.c			ft_memcpy.c		ft_memmove.c	\
		   ft_memset.c		ft_strchr.c			ft_strdup.c		ft_strlcat.c	\
		   ft_strlcpy.c		ft_strlen.c			ft_strncmp.c	ft_strnstr.c	\
		   ft_strrchr.c		ft_tolower.c		ft_toupper.c	ft_substr.c		\
		   ft_strjoin.c		ft_strtrim.c		ft_split.c		ft_itoa.c		\
		   ft_itoa_base.c	ft_uitoa_base.c		ft_strmapi.c	ft_striteri.c	\
		   ft_putchar_fd.c	ft_putstr_fd.c		ft_putendl_fd.c	ft_putnbr_fd.c	\
		   ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	\
		   ft_lstiter.c		ft_lstadd_back.c	ft_lstdelone.c	ft_lstclear.c	\
		   ft_lstmap.c		ft_uitoa.c
LIBFT_DIR	:= libft/
LIBFT_SRC	:= $(addprefix $(LIBFT_DIR), $(LIBFT))

PRINTF		:= \
			   pf_char.c	pf_string.c	pf_int.c		\
			   pf_ptr.c		pf_hex.c	pf_percent.c	\
			   ft_printf.c	ft_putnbrstr.c
PRINTF_DIR	:= ft_printf/
PRINTF_SRC	:= $(addprefix $(PRINTF_DIR), $(PRINTF))

GNL			:= \
			   get_next_line.c	get_next_line_utils.c
GNL_DIR		:= get_next_line/
GNL_SRC		:= $(addprefix $(GNL_DIR), $(GNL))

OBJS		:= $(LIBFT_SRC:.c=.o)	\
			   $(PRINTF_SRC:.c=.o)	\
			   $(GNL_SRC:.c=.o)

GREEN		:= \e[32m
CYAN		:= \e[36m
WHITE		:= \e[0m

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "Archiving $(GREEN)$(NAME)$(WHITE)..."

%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@
	@echo "Compiling $(CYAN)$@$(WHITE)..."

fclean: clean
	@rm -f $(NAME)
	@echo "Removing library files..."

clean:
	@rm -f $(OBJS)
	@echo "Removing object files..."

re: fclean all
