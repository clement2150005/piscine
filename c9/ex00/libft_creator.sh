gcc -Wall -Werror -Wextra ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c -c

ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

ranlib libft.a

rm -rf ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

