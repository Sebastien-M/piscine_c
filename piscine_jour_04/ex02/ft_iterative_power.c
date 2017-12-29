
int ft_iterative_power(int nb, int power)
{
    int counter;
    int result;

    result = 1;
    counter = 0;
    if (power < 0)
    {
        return (0);
    }
    while (counter < power)
    {
        result = result * nb;
        counter++;
    }
    return (result);
}
