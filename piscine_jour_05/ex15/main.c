#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main ()
{
    char src[] = "abc";
    char dest[] = "def";
    char src1[] = "aaaaa";
    char dest1[] = "dbbbb";
    char src2[] = "abc";
    char dest2[] = "def";
    
    printf("%u\n", ft_strlcat(dest, src, 1));
    printf("%u\n", ft_strlcat(dest1, src1, 4));
    printf("%u\n", ft_strlcat(dest2, src2, 5));
}