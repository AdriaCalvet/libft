NAME=libft.a

SRCS=ft_isdigit.c ft_isalpha.c ft_isalnum.c	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c

OBJECTS=ft_isdigit.o ft_isalpha.o ft_isalnum.o	ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strlcpy.o ft_strlcat.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all