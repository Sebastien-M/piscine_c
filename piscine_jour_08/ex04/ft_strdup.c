#include <stdlib.h>
#include "ft_stock_par.h"

char *ft_strcpy(char *dest, char *src);
int len(char *str);

char *ft_strdup(char *src)
{
    char *str_mem;

    str_mem = (char*)malloc(sizeof(char) * len(src));
    if (str_mem == 0)
    {
        return (0);
    }
    else
    {

        str_mem = ft_strcpy(str_mem, src);
        return (str_mem);
    }
}

int len(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return (counter + 1);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
