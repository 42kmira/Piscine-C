int     char_is_upper_alpha(char c)
{
    if ('A' <= c && c <= 'Z')
        return (1);
    return (0);
}

int     ft_str_is_uppercase(char *str)
{
    while (*str && char_is_upper_alpha(*str))
        str++;
    if (*str)
        return (0);
    return (1);
}