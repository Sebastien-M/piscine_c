#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
int main()
{
	char src[64] = "test";
	char dest[64];
	
	ft_strcpy(dest, src);
	printf("original string : %s\nCopied string : %s\n", src, dest);
	return (0);
}
