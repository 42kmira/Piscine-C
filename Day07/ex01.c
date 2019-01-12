#include <stdio.h>

void    set_array_to_index_plus(int *dest, int *index)
{
    *dest = *index;
    *index = *index + 1;
}

void    to_array_use_fx(int *array, int size, void (*function)(int *, int *), int *index)
{
    while (size-- > 0)
        function(array++, index);
}

int     *ft_range(int min, int max)
{
    int *head;
    int *index;

    if (min >= max || !(head = (int *)(malloc(sizeof(*head) * (max - min)))))
        return (NULL);
    index = min;
    to_array_use_fx(head, (max - min), set_array_to_index_plus, &index);
    return (head);
}