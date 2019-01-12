void ft_print_comb(void)
{
    char ar[4];

    ar[0] = '0' - 1;
    ar[3] = ',';
    ar[4] = ' ';

    while (++ar[0] < '7' && (ar[1] = ar[0]))
        while (++ar[1] <= '8' && (ar[2] = ar[1]))
            while (++ar[2] <= '9')
                ft_putstr(ar, 5);
    ft_putstr("789", 3);
}