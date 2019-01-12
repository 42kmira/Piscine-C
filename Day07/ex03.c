int     ft_strlen(char *str)
{
    int c;

    c = 0;
    while (*str++ && (++c));
    return (c);
}

void    count_char(char *dest, int *index)
{
    *index = *index + ft_strlen(*dest);
    *index = *index + 1;
}

void    to_array_use_fx(char **array, int size, void (*function)(char *, int *), int *index)
{
    while (size-- > 0)
        function(*array++, index);
}

void    *ft_strcat_mod(char *dest, char *src)
{
    while (*src)
        *dest++ = *src++;
    *dest = '\n';
}

char    *ft_concat_params(int argc, char **argv)
{
    char    *result;
    int     total_chars;

    total_chars = 0;
    to_array_use_fx(**argv, argc, count_char, total_chars);
    result = (char *)(malloc(sizeof(*result) * (total_chars + 1)));
    while (argc > 0)
        ft_strcat_mod(result, *argv++);
    *result = '\0';
    return (result - total_chars - 1);
}