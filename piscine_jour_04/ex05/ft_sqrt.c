int ft_sqrt(int nb)
{
    int nb2;
    int counter;
    int resultat;

    nb2 = 1;
    counter = 0;
    while (counter <= nb)
    {
        resultat = nb2 * nb2;
        if (resultat == nb)
        {
            return (nb2);
        }
        counter++;
    }
    return (resultat);
}