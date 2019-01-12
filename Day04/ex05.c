int     ft_sqrt(int nb)
{
    int result;
    unsigned int test;
    if (nb < 0)
        return (0);
    result ^= result;
    while ((test = ++result * result) <= nb)
        if (test == nb)
            return (result);
    return (0);
}

int     ft_sqrt2(int nb)
{
    int index;
    int sum;

    if (nb <= 0)
        return (0);
    index ^= index;
    sum ^= sum;
    while ((sum += (++index + index) - 1) <= nb)
        if (sum == nb)
            return (index);
    return (0);
}