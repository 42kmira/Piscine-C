void    ft_print_num_two(int num)
{
    ft_putchar((num / 10) + '0');
    ft_putchar((num % 10) + '0');
}

void    ft_print_comb2(void)
{
    int arr[1];

    arr[0] = 0 - 1;
    while (++arr[0] < 98)
    {
        arr[1] = arr[0];
        while (++arr[1] <= 99)
        {
            ft_print_num_two(arr[0]);
            ft_putchar(' ');
            ft_print_num_two(arr[1]);
            ft_putstr(", ", 2);
        }
    }
    ft_putstr("98 99", 5);
}