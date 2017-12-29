#include <stdio.h>

int *ft_range(int min, int max);
void display_array(int array[], int size);

int main()
{
    int min = 2;
    int max = 8;
    int min1 = 10;
    int max1 = 1;
    int min2 = 12;
    int max2 = 27;
    int min3 = 0;
    int max3 = 0;
    
    display_array(ft_range(min, max), (max - min));
    display_array(ft_range(min1, max1), (max1 - min1));
    display_array(ft_range(min2, max2), (max2 - min2));
    display_array(ft_range(min3, max3), (max3 - min3));
}

void display_array(int array[], int size)
{
    int counter;

    counter = 0;
    printf("\n");
    while (counter < size)
    {
        printf("%d\n", array[counter]);
        counter++;
    }
}