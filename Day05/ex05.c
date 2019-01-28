char    *ft_strstr(char *str, char *to_find)
{
    int i;

    if (!(*to_find))
        return (str);
    while (*str)
    {
        i = 0;
        while (*str && *to_find && *str == *to_find)
        {
            str++;
            to_find++;
            i++;
        }
        if (*to_find == '\0')
            return (str - i);
        else
            to_find = to_find - i;
        str = str + 1 - i;
    }
    return (0);
}