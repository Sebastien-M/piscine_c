char *ft_strstr(char *str, char *to_find)
{
	int counter;
	int counter2;

	counter = 0;
	counter2 = 0;
	while (str[counter] != '\0')
	{
		while (to_find[counter2] == str[counter + counter2])
		{
			if (to_find[counter2 + 1] == '\0')
			{
				return (str + counter);
			}
			counter2++;
		}
		counter++;
	}
	return (0);
}
