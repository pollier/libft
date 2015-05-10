NAME = libft.a
LIBFT = \
ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_itoa.c \
ft_strsplit.c ft_strtrim.c ft_strjoin.c ft_strsub.c ft_strnequ.c \
ft_strequ.c ft_strmap.c ft_striteri.c ft_striter.c ft_strclr.c \
ft_strdel.c ft_strnew.c ft_memdel.c ft_memalloc.c ft_atoi.c \
ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_islower.c \
ft_isupper.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c \
ft_memmove.c ft_putnbr.c ft_strchr.c ft_strlcat.c ft_strncpy.c \
ft_bzero.c ft_memcmp.c ft_strcmp.c ft_strncmp.c ft_memset.c \
ft_putstr.c ft_strcpy.c ft_strlen.c ft_strrchr.c ft_strstr.c \
ft_strnstr.c ft_memccpy.c ft_memcpy.c ft_putchar.c ft_strcat.c \
ft_strdup.c ft_strndup.c ft_strncat.c ft_putendl.c ft_lstdelone.c \
ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_strmapi.c ft_lstmap.c \
ft_lstnew.c ft_realloc.c ft_append.c

OBJ = $(LIBFT:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all NAME clean fclean re