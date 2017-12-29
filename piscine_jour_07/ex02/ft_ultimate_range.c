#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *results;
    int counter;

    counter = 0;
    if (min >= max)
    {
        return (0);
    }
    results = (int *)malloc(sizeof(int) * (max - min));
    while (min < max)
    {
        results[counter] = min;
        min++;
        counter++;
    }
    return (results);
}

int ft_ultimate_range(int **range, int min, int max)
{
    *range = ft_range(min, max);
    if (*range == 0)
    {
        return (0);
    } 
    return (max - min);
}