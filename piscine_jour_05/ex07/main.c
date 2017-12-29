#include <stdio.h>

char *ft_strcapitalize(char *str);
int main()
{
    char sentence[] = "test TEST TEST TEst";
    char sentence1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s\n", ft_strcapitalize(sentence));
    printf("%s\n", ft_strcapitalize(sentence1));
    return (0);
}