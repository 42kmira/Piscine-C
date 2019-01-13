int     char_is_alphanumeric(char c)
{
    if (char_is_alpha(c) || (('0' <= c && c <= '9')))
        return (1);
    return (0);
}

char    *ft_strcapitalize(char *str)
{
    char *head;

    head = str;
    while (*str)
    {
        while (*str && !(char_is_alphanumeric(*str)))
            str++;
        if (char_is_alpha(*str) && *str >= 'a')
            *str = *str + ('A' - 'a');
        while (*str && char_is_alphanumeric(*str++))
            if ('A' <= *str && *str <= 'Z')
                *str = *str + ('a' - 'A');
    }
    return (head);
}