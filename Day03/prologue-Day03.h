#include <unistd.h>

#ifndef PROLOGUE-DAY03
# define PROLOGUE-DAY03 

    void    ft_putchar(char c);

    void    ft_putchar(char c)
    {
        write(1, &c, 1);
    }

    //User functions that have been used more than once


#endif