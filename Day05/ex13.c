int     char_is_lower_alpha(char c)
{
    if ('a' <= c && c <= 'z')
        return (1);
    return (0);
}

int     ft_str_is_lowercase(char *str)
{
    while (*str && char_is_lower_alpha(*str))
        str++;
    if (*str)
        return (0);
    return (1);
}