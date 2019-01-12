int     ft_is_prime(int nb)
{
    int a;

    a = 3;
    if (nb < 2)
        return (0);
    if (nb % 2 == 0 && nb != 2)
        return (0);
    while (a <= nb / a) //(a * a) needs to be able to overflow.
    {
        if (nb % a == 0)
            return (0);
        a = a + 2;
    }
    return (1);
}