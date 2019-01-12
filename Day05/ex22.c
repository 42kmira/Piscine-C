#include <unistd.h>

int     char_is_printable(char c)
{
    if (' ' <= c && c <= '~')
        return (1);
    return (0);
}
//🚨 Warning!
//🚨 Warning!
void    ft_putnbr_base(int nbr, char *base)
{
    if (nbr < 15)
        write (1, "blah", 4);
    else if (16 <= nbr && nbr <= 31)
        write (1, "blah blah", 9);
    else
        write (1, "blah blah blah", 13);
}

void    print_string_hexa(char c)
{
    write (1, "\\", 1);
    ft_putnbr_base(c, "0123456789abcdef");
}

void    ft_putstr_non_printable(char *str)
{
    while (*str)
        if (char_is_printable(*str))
            write(1, *str, 1);
        else
            print_string_hexa(*str);
}