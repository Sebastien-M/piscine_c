gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c -Wall -Wextra -Werror
ar rc libft.a *.o
ranlib libft.a
rm *.o