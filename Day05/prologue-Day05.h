#include <unistd.h>

#ifndef PROLOGUE-DAY05
# define PROLOGUE-DAY05

    void    ft_putchar(char c);

    void    ft_putchar(char c)
    {
        write(1, &c, 1);
    }

    //User functions that have been used more than once
    int     char_is_alpha(char c)
    {
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
            return (1);
        return (0);
    }

#endif