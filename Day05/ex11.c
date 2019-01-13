int     ft_str_is_alpha(char *str)
{
    while (*str && char_is_alpha(*str))
        str++;
    if (*str)
        return (0);
    return (1);
}