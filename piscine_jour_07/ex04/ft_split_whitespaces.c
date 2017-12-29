#include <stdio.h>
#include <stdlib.h>

int word_cnt(char *str);
char **ft_split_whitespaces(char *str)
{
    char **tab;
    int tmp_index;
    int tab_counter;
    int counter;

    counter = 0;
    tab_counter = 0;
    tmp_index = 0;
    tab = malloc(sizeof(char) * 100);
    while(str[counter] != '\0')
    {
        if (str[counter] == '\t' || str[counter] == '\n' || str[counter] == ' ')
        {
            ft_strncpy(str,)
            tmp_index = counter;
        }
        counter ++;
    }
    return (tab);
}

char *ft_strncpy(char *dest, char *src,unsigned int i, unsigned int n)
{
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
