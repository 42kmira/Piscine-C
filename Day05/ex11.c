int     char_is_alpha(char c)
{
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
        return (1);
    return (0);
}

int     ft_str_is_alpha(char *str)
{
    while (*str && char_is_alpha(*str))
        str++;
    if (*str)
        return (0);
    return (1);
}