int ft_recursive_factorial(int nb)
{
    int result;

    if (nb < 0)
    {
        return (0);
    }
    else if (nb > 1)
    {
        result = nb * ft_recursive_factorial(nb - 1);
        return (result);
    }
    else
    {
        return (1);
    }
}
