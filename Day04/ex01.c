int     ft_recursive_factorial(int nb)
{
    if (nb <= 0 || nb > 12)
        return (0);
    return (nb > 1 ? nb * ft_recursive_factorial(nb - 1) : 1);
}