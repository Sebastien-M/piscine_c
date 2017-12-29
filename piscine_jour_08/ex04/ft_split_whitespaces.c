#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*createword(int startword, int i, char *str)
{
	char	*word;
	word = (char*)malloc(sizeof(char) * 20);
	int		o = 0;
	while (startword < i)
	{
		word[o] = str[startword];
		o++;
		startword++;
	}
	word[i] = '\0';
	return (word);
}

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		words;
	char	*word;
	word = (char*)malloc(sizeof(char) * 20);
	int		startword;
	int		index;
	int		i;

    words = 0;
	i = 1;
	while (i < ft_strlen(str))
	{
		if (is_whitespace(str[i]) && !is_whitespace(str[i - 1]) && i - 1 != ft_strlen(str))
			words++;
		i++;
	}
	arr = (char**)malloc(sizeof(char*) * (words + 2));
	i = 0;
	startword = 0;
	index = 0;
	while (i < ft_strlen(str))
	{
		if ((is_whitespace(str[i])) && (!is_whitespace(str[i - 1])) && (i - 1 != ft_strlen(str)))
		{
			word = createword(startword, i, str);
			arr[index] = word;
			index++;
			startword = i + 1;
			if (index == words)
				{
					word = createword(i + 1, ft_strlen(str), str);
					arr[index] = word;
					index++;
				}
		}
		i++;
	}
	arr[index] = "\0";
	return (arr);
}