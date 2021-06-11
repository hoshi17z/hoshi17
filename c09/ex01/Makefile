SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = $(SRCS:.c=.o)

INCLUDES = -I includes

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = srcs/

CFILES = $(addprefix $(SRC_DIR), $(SRCS))

OFILES = $(addprefix $(SRC_DIR), $(OBJS))

all: $(NAME)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OFILES)
	ar rc $@ $^
	ranlib $@

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
