NAME=libft.a

SRCS=ft_isdigit.c ft_isalpha.c ft_isalnum.c	ft_isascii.c ft_isprint.c ft_strlen.c

OBJECTS=ft_isdigit.o ft_isalpha.o ft_isalnum.o	ft_isascii.o ft_isprint.o ft_strlen.o

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