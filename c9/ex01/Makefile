SRCS =  ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

GCC = gcc

FLAGS = -Wall -Wextra -Werror

C = -c

AR = ar rc

NAME = libft.a

HEAD = ./includes/

OBJS = $(SRCS:.c=.o)

RANLIB = ranlib

RM = rm -rf

all: compile libft.a archive clean

compile:
		$(GCC) $(FLAGS) $(SRCS) $(C) -I $(HEAD)

libft.a:
		$(AR) $(NAME) $(OBJS)

archive:
		$(RANLIB) $(NAME)

clean:
		$(RM) $(OBJS)

