#include "ft_putchar.c"

char g_imprint[9] = {
    'A',    'B',    'C',
    'B',    ' ',    'B',
    'C',    'B',    'A',
};

int     input_is_sanitized(int a)
{
    return (a > 0);
}

void    print_rush_line(unsigned int width, char LT_corner, char MID, char RT_corner)
{
    if (input_is_sanitized(width))
    {
        ft_putchar(LT_corner);
        while (width-- > 2)
            ft_putchar(MID);
        if (width == 1)
            ft_putchar(RT_corner);
    }
    ft_putchar('\n');
}

void    ft_rush(int width, int height, char *imprint)
{
    if (input_is_sanitized(height))
    {
        print_rush_line(width, imprint[0], imprint[1], imprint[2]);
        while (height-- > 2)
            print_rush_line(width, imprint[3], imprint[4], imprint[5]);
        if (height == 1)
            print_rush_line(width, imprint[6], imprint[7], imprint[8]);
    }
}

void    rush(int width, int height)
{
    ft_rush(width, height, g_imprint);
}

int     main(void)
{
    rush(4, 5);
    return (0);
}