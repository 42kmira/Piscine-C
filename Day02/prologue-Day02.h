#include <unistd.h>

#ifndef PROLOGUE-DAY02
# define PROLOGUE-DAY02

    void    ft_putchar(char c);

    void    ft_putchar(char c)
    {
        write(1, &c, 1);
    }

    //User functions that have been used more than once
    void    ft_putstr(char *str, int len);

    void    ft_putstr(char *str, int len)
    {
        write(1, str, len);
    }

#endif