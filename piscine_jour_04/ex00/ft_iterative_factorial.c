
int ft_iterative_factorial(int nb)
{
    int counter;
    int result;

    result = 1;
    counter = 1;
    if (nb < 0)
    {
        return (0);
    }
    else
    {
        while (counter <= nb)
        {
            result = counter * (result);
            counter++;
        }
        return (result);
    }
}
