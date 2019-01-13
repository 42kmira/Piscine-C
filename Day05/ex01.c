void ft_putnbr(int nb)
{
    unsigned int num;

    if (nb < 0)
    {
        ft_putchar('-');
        num = -1 * nb;
    }
    else
        num = nb;
    if (num < 10 && (num = num + '0'))
        ft_putchar(num);
    else
    {
        ft_putnbr(num / 10);
        num = (num % 10) + '0';
        ft_putchar(num);
    }
}