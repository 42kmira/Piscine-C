int     char_is_printable(char c)
{
    if (' ' <= c && c <= '~')
        return (1);
    return (0);
}

int     ft_str_is_printable(char *str)
{
    while (*str && char_is_printable(*str))
        str++;
    if (*str)
        return (0);
    return (1);
}