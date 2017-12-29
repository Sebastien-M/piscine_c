int ft_recursive_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
    {
        return (0);
    }
    if (power >= 1)
    {
        result = nb * ft_recursive_power(nb, power - 1);
        return (result);
    }
    else
    {
        return (1);
    }
}
