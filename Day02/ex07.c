void    ft_clean_up(char *arr, int n)
{
    int i;

    i = n;
    while (i-- > 0)
    {
        if (arr[i] != '9' && arr[i] != '9' - (n - (i + 2)))
            break;
        arr[i - 1] = arr[i - 1] + 1;
    }
    while (++i < n)
        arr[i] = arr[i - 1] + 1;
}

void    ft_print_combn(int n)
{
    char arr[10];
    int i;

    if (n <= 0 || n > 10)
        return ;
    i = -1;
    while (++i < n)
        arr[i] = i + '0';
    while (arr[0] <= '9' - n)
    {
        ft_putstr(arr, n);
        ft_putchar(',');
        ft_putchar(' ');
        if (arr[n - 1] == '9')
            ft_clean_up(arr, n);
        else
            arr[n - 1] = arr[n - 1] + 1;
    }
    ft_putstr(arr, n);
}