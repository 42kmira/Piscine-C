#include <stdio.h>

int     ft_strlen(char *str) //Need to test out 0 case
{
    int c;

    c = 0;
    while (*str++ && (++c)); //Potential Memory out of bounds
    return (c);
}

char    *ft_strcpy(char *dest, char *src)
{
    char *head;

    head = dest;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (head);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    //Wondering best practices here (<typecast?>)(malloc(sizeof(*<varname>) * (size)))
    //Also wondering if there could be a smaller function like void *malloc_util(void *dest, int size)
    //Which could automate this for us.
    dest = (char *)(malloc(sizeof(*dest) * (ft_strlen(src) + 1)));
    if (dest == NULL)
        return NULL;
    return (ft_strcpy(dest, src));
}