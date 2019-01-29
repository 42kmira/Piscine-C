#include <unistd.h>

/*  
    Prints boxes ranging from zero-dimensions to four-dimensions.
    E.g. Hyperrectangles, Rectangular Prisms, Rectangles, Lines, Point, null. 
    Width x Height x Depth x Time
    See rush_pro_main.c on how to use.
*/

void    ft_putchar(char *c)
{
    write(1, c, 1);
}

int power(int nb, int power)
{
    int result = 1;
    while (power-- > 0)
        result *= nb;
    return (result);
}

void    ft_rush(char *s1, int width, int height, int depth, int time, int count)
{
    void    (*fx)(char *str, int d1, int d2, int d3, int d4, int count);

    if (count == 0)
        fx = ft_putchar;
    else
        fx = ft_rush;

    if (count >= 0)
    {
        fx(s1, width, width, height, depth, count - 1);
        while (time-- > 2)
            fx(s1 + (1 * power(3, count)), width, width, height, depth, count - 1);
        if (time == 1)
            fx(s1 + (2 * power(3, count)), width, width, height, depth, count - 1);
    }
    if (count == 0)
        write(1, "\n", 1);
}
