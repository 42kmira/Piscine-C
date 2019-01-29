#include "rush_pro.c"

/*
    Below is the format of a Hyperrectangle.
    The first three lines define the face of the rectangle at t1.
    The next six lines define the layers between the top face
    and the bottom face.

    Seperated by a space is the definition of the rectangular prism that
    will be shown between t1 and tf. The t2 rectanglular prism.

    The tf rectangular prism is defined by the last 9 lines.
*/

char g_Hyperrectangle[81] = {
    '1',    '-',    'C',
    '|',    'T',    '|',
    'C',    '-',    '1',
            'H',    '1',    'H',
            '1',    ' ',    '1',
            'H',    '1',    'H',
                    '1',    '-',    'D',
                    '|',    'B',    '|',
                    'D',    '-',    '1',

    '2',    '-',    'C',
    '|',    'T',    '|',
    'C',    '-',    '2',
            'H',    '2',    'H',
            '2',    ' ',    '2',
            'H',    '2',    'H',
                    '2',    '-',    'D',
                    '|',    'B',    '|',
                    'D',    '-',    '2',

    '3',    '-',    'C',
    '|',    'T',    '|',
    'C',    '-',    '3',
            'H',    '3',    'H',
            '3',    ' ',    '3',
            'H',    '3',    'H',
                    '3',    '-',    'D',
                    '|',    'B',    '|',
                    'D',    '-',    '3',

};

char g_Rectangle[9] = {
    'A',    'B',    'C',
    'B',    ' ',    'B',
    'C',    'B',    'A',
};

int     main(void)
{
    printf("Below is a Hyperrectangle:\n");
    ft_rush(g_Hyperrectangle, 17, 5, 4, 3, 3);

    /* So you can also do the following.*/
    printf("\n\nBelow is a rectangle\n");
    ft_rush(g_Rectangle, 7, 4, 0, 0, 3);
    return (0);
}