int     ft_fibonacci(int index)
{
    if (index < 0 || index > 13)
        return (-1);
    if (index == 1 || index == 0)
        return (index);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}